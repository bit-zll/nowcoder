#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h> 
//����ֻ����ˣ�����Ļ�������Ϣ���ߴ�ҡ�
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//�����Ϊ���У��ֱ�Ϊ�����У��ָ��У���Ϣ�С�
//��һ�У������У�ÿ������֮����4���ո�
//�ڶ��У��ָ��У�һ��21������"-"��
//�����У���Ϣ�У�ÿ�������Ϣ�ͱ�������ĸ���롣
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     Man\n");
//	return 0;
//}

//����һ��ʮ��������a����һ���˽�����b�����a+b��ʮ���ƽ������Χ-231~231-1��
//int main()
//{
//	int a, b, c;
//	scanf("%x %o", &a, &b);
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����


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

//���磺һ���˵����Ϊ1.75�ף�����Ϊ68ǧ�ˣ�����BMI=68/(1.75^2)=22.2��ǧ��/��^2������BMIָ��Ϊ18.5��23.9ʱ�������������ʾ������ڽ������ա�����ж����彡�������
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

//��������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
//һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ����
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

// ����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��

//���磺

//655 = 6 * 55 + 65 * 5

//1461 = 1 * 461 + 14 * 61 + 146 * 1

//��� 5λ���е����� Lily Number��

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

//���У���һ������һ����������ʾn��ѧ���� >= 5�����ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ���
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

//���룺һ�У��ַ����У�����A��B���������ַ�0������
//�����һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
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