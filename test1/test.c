#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ÿ���˶����Ϊ��V(VIP��Very Important Person)����Ҫһ��һ����۲��У��ȴ�Сv����Ҫ�������Сд��ĸv��ɵĴ�V��
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

//ȷ����ͬ���������������ڴ���ռ����ֽڣ��������ͬ���������������ڴ���ռ����ֽڣ���
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}

//��д����������С�ɻ�
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

//ʮ��������1234��Ӧ�İ˽��ƺ�ʮ�����ƣ���ĸ��д�����ÿո�ֿ�������Ҫ���ڰ˽���ǰ��ʾǰ��0����ʮ��������ǰ��ʾǰ��0X��
int main()
{
	int i = 1234;
	printf("0%o\n", i);
	printf("0x%x\n", i);
	return 0;
}