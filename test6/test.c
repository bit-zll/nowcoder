#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//试求单位冲激函数在时域t上的值
//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t)!=EOF)
//	{
//		if (t > 0)
//		
//			printf("1\n");
//		
//		else if (t == 0)
//		
//			printf("0.5\n");
//		
//		else
//		
//			printf("0\n");
//		
//	}
//	return 0;
//}

//
//int main() {
//	int t = 0;
//	while (scanf("%d", &t) != EOF) {
//		if (t == 0)
//			printf("0.5\n");
//		else if (t > 0)
//			printf("1\n");
//		else
//			printf("0\n");
//	}
//	return 0;
//}

//给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c&&a + c > b&&b + c > a)
//		{
//			if (a == b&&b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//判断人体胖瘦程度
//int main()
//{
//	int w, h;
//	float BMI;
//	while (scanf("%d %d", &w, &h) != EOF)
//	{
//		BMI = w / (h / 100.f*h / 100.f);
//		if (BMI < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (BMI >= 18.5&&BMI <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (BMI>23.9&&BMI <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}

//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，
//当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。
//#include <math.h>
//int main()
//{
//	double a, b, c,d,x1,x2,m,n;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		d = b*b - 4 * a*c;
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			if (d == 0)
//			{
//				x1 =x2= -b / (2 * a);
//				printf("x1=x2=%.2f\n", x1);
//			}
//			else if (d > 0)
//			{
//				x1 = (-b - sqrt(d)) / (2 * a);
//				x2 = (-b + sqrt(d)) / (2 * a);
//				printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
//			}
//			else
//			{
//				m = -b / (2 * a);
//				n = sqrt(-d) / (2 * a);
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", m, n,m,n);
//			}
//		}
//	}
//	return 0;
//}

//入年份和月份，计算这一年这个月有多少天。
int main()
{
	int year, month,day;
	while (scanf("%d %d", &year, &month) != EOF)
	{
		if (year % 4 == 0 && year % 100 != 0||year % 400 == 0)
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 ||
				month == 8 || month == 10 || month == 12)
			{
				day = 31;
				printf("%d\n", day);
			}
			else if (month == 2)
			{
				day = 29;
				printf("%d\n", day);
			}
			else
			{
				day = 30;
				printf("%d\n", day);
			}
		}
		else
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 ||
				month == 8 || month == 10 || month == 12)
			{
				day = 31;
				printf("%d\n", day);
			}
			else if (month == 2)
			{
				day = 28;
				printf("%d\n", day);
			}
			else
			{
				day = 30;
				printf("%d\n", day);
			}
		}
	}
	return 0;
}