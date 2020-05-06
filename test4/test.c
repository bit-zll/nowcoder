#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
//给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4/3*πr3，其中 π= 3.1415926
//int main()
//{
//	float r;
//	double V;
//	scanf("%f", &r);
//	V = (4 * 3.1415926*pow(r,3))/3;
//	printf("%.3lf\n", V);
//	return 0;
//}

//实现字母的大小写转换。多组输入输出。
#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		printf("%c\n", tolower(ch));
//	}
//	return 0;
//}
//int main()
//{
//	char c;
//	c=getchar();
//	putchar(c);
//	return 0;
//}
//不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		printf("%d\n", 1 << a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		printf("%.lf\n", pow(2, a));
//	}
//	return 0;
//}

//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。
//KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
int main()
{
	int n, h, m,k;
	scanf("%d%d%d", &n, &h, &m);
	if (m % h == 0)
	{
		k = n - m / h;
	}
	else
	{
		k = n - m / h - 1;
	}
	printf("%d\n", k);
	return 0;
}