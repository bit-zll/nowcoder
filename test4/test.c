#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
//����һ������İ뾶��������������������������ʽΪ V = 4/3*��r3������ ��= 3.1415926
//int main()
//{
//	float r;
//	double V;
//	scanf("%f", &r);
//	V = (4 * 3.1415926*pow(r,3))/3;
//	printf("%.3lf\n", V);
//	return 0;
//}

//ʵ����ĸ�Ĵ�Сдת�����������������
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
//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ���
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

//BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣���һʱ�䷢�������̡�
//KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
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