#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212。
//int main()
//{
//	int n = 0;
//	int a = 40;
//	int c = 212;
//	n = (-8 + 22)*a - 10 + c / 2;
//	printf("%d\n", n);
//	return 0;
//}

//给定两个整数a和b (－10,000 < a,b < 10,000)，计算a除以b的整数商和余数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &a,&b);
//	i = a / b;
//	j = a%b;
//	printf("%d %d", i, j);
//	return 0;
//}

//将一个四位数，反向输出。
//方法1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n % 10;//2
//	n /= 10;//153
//	int b = n % 10;//3
//	n /= 10;//15
//	int c = n % 10;//5
//	n /= 10;//1
//	int num = a * 1000 + b * 100 + c * 10 + n;
//	printf("%d\n", num);
//	return 0;
//}
//方法2
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	printf("%c%c%c%c", arr[3], arr[2], arr[1], arr[0]);
//	return 0;
//}



//1.只保留该数的最后两位，例如：对KiKi来说1234等价于34；

//2.如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。
//int main()
//{
//	int a, b,sum,n;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	n = sum % 100;
//	printf("%d\n", n);
//	return 0;
//}

//依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩（小数点后保留两位）。
//int main()
//{
//	float a, b, c,sum,aver;
//	scanf("%f %f %f", &a, &b, &c);
//	sum = a + b + c;
//	aver = sum / 3;
//	printf("%.2f %.2f", sum, aver);
//	return 0;
//}

//BMI体重公斤数除以身高米数平方得出的数字 输出（保留两位小数）
//int main()
//{
//	int w, h;
//	float BMI;
//	scanf("%d %d", &w, &h);
//	BMI = w /( h /100.f * h/100.f) ;
//	printf("%.2f\n", BMI);
//	return 0;
//}

//根据给出的三角形3条边a, b, c（0 < a, b, c < 100,000），计算三角形的周长和面积
#include <math.h>
int main()
{
	int a, b, c;
	float circ,s,area;
	scanf("%d %d %d", &a, &b, &c);
	circ = (a + b + c)*1.f;
	s = (a + b + c) / 2.f;
	area = (sqrt(s*(s - a)*(s - b)*(s - c)));
	printf("%.2f %.2f\n", circ, area);
	return 0;
}