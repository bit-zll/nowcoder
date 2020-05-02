#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//每个人都想成为大V(VIP：Very Important Person)，但要一点一点积累才行，先从小v做起。要求输出由小写字母v组成的大V。
//v   v
// v v
//  v
//int main()
//{
//	printf("%c   %c\n", 'v','v');
//	printf(" %c %c\n", 'v', 'v');
//	printf("  %c\n", 'v');
//	return 0;
//}

//确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大（字节）。
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}

//编写程序输出这架小飞机
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 4; j++)
//		{
//			printf(" ");
//		}
//		int k = 0;
//		for (k = 0; k <= 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	int a = 0;
//	for (a = 0; a <=1; a++)
//	{
//		int b = 0;
//		for (b = 0; b < 12; b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("    %c  %c\n", '*', '*');
//	printf("    %c  %c\n", '*', '*');
//	return 0;
//}

//十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在十六进制数前显示前导0X。
int main()
{
	int i = 1234;
	printf("0%o\n", i);
	printf("0x%x\n", i);
	return 0;
}