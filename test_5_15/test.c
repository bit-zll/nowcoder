#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h> 
//你的手机丢了，在屏幕上输出信息告诉大家。
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//输出分为三行，分别为标题行，分隔行，信息行。
//第一行，标题行，每个标题之间间隔4个空格。
//第二行，分隔行，一共21个减号"-"。
//第三行，信息行，每列输出信息和标题首字母对齐。
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     Man\n");
//	return 0;
//}

//输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果（范围-231~231-1）
//int main()
//{
//	int a, b, c;
//	scanf("%x %o", &a, &b);
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。


//int main()
//{
//
//  char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}

//例如：一个人的身高为1.75米，体重为68千克，他的BMI=68/(1.75^2)=22.2（千克/米^2）。当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险。编程判断人体健康情况。
//#include <math.h>
//int main()
//{
//	double h=0.0, w=0.0;
//	scanf("%lf %lf", &w, &h);
//	double BMI = w / pow(h,2);
//	if (BMI>=18.5&&BMI<=23.9)
//	{
//		printf("Normal\n");
//	}
//	else
//	{
//		printf("Abnormal\n");
//	}
//	return 0;
//}

//如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。
//int main()
//{
//	float money,cost;
//	int month, date,a;
//	scanf("%f %d %d %d", &money, &month, &date, &a);
//	if (month == 11 && date == 11)
//	{
//		if (a == 1)
//		{
//			cost = money*0.7 - 50;
//			if (cost < 0.0)
//			{
//				cost = 0.0;
//			}
//		}
//		else
//		{
//			cost = money*0.7;
//		}
//	}
//	else if (month == 12 && date == 12)
//	{
//		if (a == 1)
//		{
//			cost = money*0.8 - 50;
//			if (cost < 0.0)
//			{
//				cost = 0.0;
//			}
//		}
//		else
//		{
//			cost = money*0.8;
//		}
//	}
//	printf("%.2f\n", cost);
//	return 0;
//}

// 变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。

//例如：

//655 = 6 * 55 + 65 * 5

//1461 = 1 * 461 + 14 * 61 + 146 * 1

//求出 5位数中的所有 Lily Number。

//int main()
//{
//	int num = 10000;
//	int a1, a2, b1, b2, c1, c2, d1, d2;
//	while (num >= 10000 && num <= 99999)
//	{
//		a1 = num / 10000;
//		a2 = num % 10000;
//		b1 = num / 1000;
//		b2 = num % 1000;
//		c1 = num / 100;
//		c2 = num % 100;
//		d1 = num / 10;
//		d2 = num % 10;
//		if (num == a1*a2 + b1*b2 + c1*c2 + d1*d2)
//		{
//			printf("%d ", num);
//		}
//		num++;
//	}
//	return 0;
//}

//两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int arr[40] = { 0 };
//	int j = 0;
//	for (j = 0; j < num; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//输入：一行，字符序列，包含A或B，输入以字符0结束。
//输出：一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
int main()
{
	int a_count = 0, b_count = 0;
	char ch = 0;
	while (scanf("%c", &ch) != EOF)
	{
		if (ch == 'A')
		{
			a_count++;
		}
		else if (ch == 'B')
		{
			b_count++;
		}
		else
		{
			break;
		}
	}
	if (a_count < b_count)
	{
		printf("B\n");
	}
	else if (a_count > b_count)
	{
		printf("A\n");
	}
	else
	{
		printf("E\n");
	}
	return 0;
}