#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʮ����������ABCDEF��Ӧ��ʮ������������ռ���Ϊ15��
//int main()
//{
//	int a = 0XABCDEF;
//	printf("%15d", a);
//	return 0;
//}

//�������У�
//��һ��Ϊ��Hello world!��
//�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ��
//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", ret);//12  ����ֵ���ַ�����
//	return 0;
//}

//��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ�
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

//����ֻ��һ�У��������ڣ����������գ�������֮�������û�зָ���.
//������У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0��
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

//����������������Χ-2^31~2^31-1�������������������
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