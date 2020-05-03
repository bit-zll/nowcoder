#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
//int main()
//{
//	int a = 0XABCDEF;
//	printf("%15d", a);
//	return 0;
//}

//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值。
//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", ret);//12  返回值是字符个数
//	return 0;
//}

//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩
//int main()
//{
//	int i = 17140216;
//	float j = 80.845;
//	float k = 90.55;
//	float m = 100.00;
//	printf("The each subject score of  No. %d is %.3f, %.2f, %.2f.\n.", i, j, k, m);
//	return 0;
//}

//    1
//   1 1
//  1 1 1
// 1 1 1 1
//1 1 1 1 1
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//		int m = 0;
//		for (m = 0; m < 1 + i; m++)
//		{
//			printf("%d ", k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符.
//输出三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
//int main()
//{
//	int birth = 0;
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%d", &birth);
//	year = birth / 10000;//1995
//	month = birth % 10000;//0808
//	date = month % 100;//08
//	month /= 100;//8
//	printf("year=%d\n", year);
//	printf("month=0%d\n", month);
//	printf("date=%d\n", date);
//	return 0;
//}

//int main() 
//{
//
//	int birthday = 0, month = 0, day = 0;
//	scanf("%d", &birthday);
//
//	day = birthday % 100;//08
//	birthday /= 100;//199508
//	month = birthday % 100;//08
//	birthday /= 100;//1995
//
//	printf("year=%d\n", birthday);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", day);
//	return 0;
//}

//输入两个整数，范围-2^31~2^31-1，交换两个数并输出。
int main()
{
	int a = 0;
	int b = 0;
	int tmp = 0;
	scanf("%d,%d", &a, &b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}