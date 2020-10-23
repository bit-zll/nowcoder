clear;clc;
fid=fopen('','rb');
width=512;
height=512;
imgdata=fread(fid,[width,height],'uint16');
fclose(fid);
 
L=2; %����
imgdata=double(imgdata);
imgdata2=imgdata.^2;
mean1=mean(mean(imgdata));
mean2=mean(mean(imgdata2));
vmuc=1/(mean2/mean1/mean1/(1+1/L)-1); %��״����
 
y=imgdata(:);
[h,w]=hist(y,max(y));
bar(w,h/sum(h)); %ֱ��ͼ
hold on;
 
%��˹�ֲ�
[f,s]=normfit(y);
y1=normpdf(w,f,s);
[h1,p1,k1,cv1]=kstest(y,[y,normcdf(y,f,s)]); %ks����
hold on;
%�����ֲ�
[p,n]=raylfit(y,0.05);
y2=raylpdf(w,p);
[h2,p2,k2,cv2]=kstest(y,[y,raylcdf(y,p)]);  %ks����
hold on;
%�������ֲ�
a=wblfit(y);
y3=wblpdf(w,a(1),a(2));
[h3,p3,k3,cv3]=kstest(y,[y,wblcdf(y,a(1),a(2))]);  %ks����
hold on;
%������̬�ֲ�
par=lognfit(y);
y4=lognpdf(w,par(1),par(2));
[h4,p4,k4,cv4]=kstest(y,[y,logncdf(y,par(1),par(2))]);  %ks����
hold on;
%Gamma�ֲ�
pha=gamfit(y);
y5=gampdf(w,pha(1),pha(2));
[h5,p5,k5,cv5]=kstest(y,[y,gamcdf(y,pha(1),pha(2))]);  %ks����
hold on;
%K�ֲ�
if (vmuc<0)
    y6=chi2pdf(w,L); %��״����Ϊ����ʱ�������ֲ�
else
    %y6=2/w/gamma(vmuc)/gamma(L)*((L*vmuc*w)/mean(y)).^(L+vmuc)/2*besselk((vmuc-L),2*sqrt((L*vmuc*w)/mean(y)));
    alpha=sqrt(std(y).^2/(2*vmuc));
    y6=2*((w/(2*alpha)).^vmuc).*besselk((vmuc-1),w/alpha)./(alpha*gamma(vmuc)); %K�ֲ�
end
[h6,p6,f6]=kstest2(y,y6);
%��ͼ
plot(w,y1,'r-',w,y2,'k:',w,y3,'m-.',w,y4,'y--',w,y5,'c',w,y6,'k');
legend('ֱ��ͼ','Normal','Rayleigh','Weibull','Lognormal','Gamma','K')
title('ֱ��ͼ���PDF');