#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>
//����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF);
//	{
//		if (a >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}

//�Ӽ�������һ��������ʾ�ĳɼ�������жϳɼ��Ƿ���90~100֮�䣬������������Perfect����
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a >= 90 && a <= 100)
//		{
//			printf("Perfect\n");
//		}
//	}
//	return 0;
//}

//�Ӽ�����������һ��������ʾ�ķ���������жϸ÷����Ƿ��ڼ���Χ�ڣ�������񣬼����������ڵ���60�֣��������Pass�������������Fail����
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	{
//		if (a >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}

//�Ӽ�����������һ����������Χ-231~231-1��������ж�������ż�ԡ�
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a % 2 == 1)
//		{
//			printf("Odd\n");
//		}
//		else
//		{
//			printf("Even\n");
//		}
//	}
//	return 0;
//}

//�������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
//int main()
//{
//	char letter = 0;
//	while (scanf("%c", &letter) != EOF)
//	{
//		getchar();
//		if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ||
//			letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}

//�ж�������ַ��ǲ�����ĸ����������ʵ�֡�
//int main()
//{
//	char letter = 0;
//	while (scanf("%c",&letter) != EOF)
//	{
//		getchar();
//		if (isalpha(letter))
//		{
//			printf("%c is an alphabet.\n",letter);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", letter);
//		}
//	}
//	return 0;
//}

//��һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
//int main()
//{
//	char letter = 0;
//	while (scanf("%c", &letter)!=EOF)
//	{
//		getchar();
//		if (isupper(letter))
//		{
//			printf("%c", tolower(letter));
//		}
//		else if (islower(letter))
//		{
//			printf("%c", toupper(letter));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�Ӽ���������������Ĵ�С��ϵ������ʵ�֡�

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) 
	{
		if (a == b)
			printf("%d=%d\n", a, b);
		else if (a > b)
			printf("%d>%d\n", a > b ? a : b, a < b ? a : b);
		else
			printf("%d<%d\n", a < b ? a : b, a > b ? a : b);
	}
	return 0;
}