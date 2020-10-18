import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
N=3                                                

def distance_fun(p1, p2, N):
    result=0
    for i in range(0,N):
        result=result+((p1[i]-p2[i])**2)
    return np.sqrt(result)

def mean_fun(a):
     return np.mean(a,axis=0)

def farthest(center_arr, arr):
    f = [0, 0]
    max_d = 0
    for e in arr:
        d = 0
        for i in range(center_arr.__len__()):
            d = d + np.sqrt(distance_fun(center_arr[i], e, N))
        if d > max_d:
            max_d = d
            f = e
    return f

def closest(a, arr):
    c = arr[1]
    min_d = distance_fun(a, arr[1])
    arr = arr[1:]
    for e in arr:
        d = distance_fun(a, e)
        if d < min_d:
            min_d = d
            c = e
    return c

if __name__=="__main__":
    arr = np.random.randint(0,300, size=(350, 1, N))[:, 0, :]   
    K = 6
    r = np.random.randint(arr.__len__() - 1)
    center_arr = np.array([arr[r]])
    cla_arr = [[]]
    for i in range(K-1):
        k = farthest(center_arr, arr)
        center_arr = np.concatenate([center_arr, np.array([k])])
        cla_arr.append([])

    n = 20
    cla_temp = cla_arr
    for i in range(n):    
        for e in arr:    
            ki = 0        
            min_d = distance_fun(e, center_arr[ki],N)
            for j in range(1, center_arr.__len__()):
                if distance_fun(e, center_arr[j],N) < min_d:    
                    min_d = distance_fun(e, center_arr[j],N)
                    ki = j
            cla_temp[ki].append(e)

        for k in range(center_arr.__len__()):
            if n - 1 == i:
                break
            center_arr[k] = mean_fun(cla_temp[k])
            cla_temp[k] = []
    
    if N>=3:
        print(N,'维数据前三维投影')
        fig = plt.figure(figsize=(8, 8))
        ax = Axes3D(fig)
        for i in range(K):
            ax.scatter(center_arr[i][0], center_arr[i][1], center_arr[i][2], color=col[i])
            ax.scatter([e[0] for e in cla_temp[i]], [e[1] for e in cla_temp[i]],[e[2] for e in cla_temp[i]], color=col[i])
        plt.show()
    
    print(N,'维')
    for i in range(K):
        print('第',i+1,'个聚类中心坐标：')
        for j in range(0,N):
            print(center_arr[i][j])


