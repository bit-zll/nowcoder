#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>
//输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
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

//从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。
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

//从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
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

//从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。
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

//有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
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

//判断输入的字符是不是字母，请帮他编程实现。
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

//有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
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

//从键盘输入的两个数的大小关系，请编程实现。

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