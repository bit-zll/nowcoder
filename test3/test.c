#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�������ʽ��(-8+22)��a-10+c��2�������У�a = 40��c = 212��
//int main()
//{
//	int n = 0;
//	int a = 40;
//	int c = 212;
//	n = (-8 + 22)*a - 10 + c / 2;
//	printf("%d\n", n);
//	return 0;
//}

//������������a��b (��10,000 < a,b < 10,000)������a����b�������̺�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &a,&b);
//	i = a / b;
//	j = a%b;
//	printf("%d %d", i, j);
//	return 0;
//}

//��һ����λ�������������
//����1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n % 10;//2
//	n /= 10;//153
//	int b = n % 10;//3
//	n /= 10;//15
//	int c = n % 10;//5
//	n /= 10;//1
//	int num = a * 1000 + b * 100 + c * 10 + n;
//	printf("%d\n", num);
//	return 0;
//}
//����2
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	printf("%c%c%c%c", arr[3], arr[2], arr[1], arr[0]);
//	return 0;
//}



//1.ֻ���������������λ�����磺��KiKi��˵1234�ȼ���34��

//2.������������ڵ��� 100�� ��ôKIKIҲ�������������������λ���������λ��ʮλΪ0����ֻ������λ��
//int main()
//{
//	int a, b,sum,n;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	n = sum % 100;
//	printf("%d\n", n);
//	return 0;
//}

//��������һ��ѧ����3�Ƴɼ�������Ļ�������ѧ�����ܳɼ��Լ�ƽ���ɼ���С���������λ����
//int main()
//{
//	float a, b, c,sum,aver;
//	scanf("%f %f %f", &a, &b, &c);
//	sum = a + b + c;
//	aver = sum / 3;
//	printf("%.2f %.2f", sum, aver);
//	return 0;
//}

//BMI���ع����������������ƽ���ó������� �����������λС����
//int main()
//{
//	int w, h;
//	float BMI;
//	scanf("%d %d", &w, &h);
//	BMI = w /( h /100.f * h/100.f) ;
//	printf("%.2f\n", BMI);
//	return 0;
//}

//���ݸ�����������3����a, b, c��0 < a, b, c < 100,000�������������ε��ܳ������
#include <math.h>
int main()
{
	int a, b, c;
	float circ,s,area;
	scanf("%d %d %d", &a, &b, &c);
	circ = (a + b + c)*1.f;
	s = (a + b + c) / 2.f;
	area = (sqrt(s*(s - a)*(s - b)*(s - c)));
	printf("%.2f %.2f\n", circ, area);
	return 0;
}