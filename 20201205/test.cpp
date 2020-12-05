#define _CRT_SECURE_NO_WARNINGS

#if 0
//����С������
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	int r;
	while (r = a%b)
	{
		a = b;
		b = r;
	}
	return b;
}
int main()
{
	int a, b;
	while (cin >> a >> b)
		cout << a*b / gcd(a, b) << endl;
	return 0;
}
#endif

#if 0
//����ӷ�
class UnusualAdd
{
public:
	int addAB(int A, int B)
	{
		int sum = 0, carry = 0;
		while (B != 0)
		{
			//��Ӧλ�ĺ�
			sum = A ^ B;
			//��Ӧλ�͵Ľ�λ����Ȼ�ǽ�λ����Ҫ��������һλ
			carry = (A & B) << 1;
			A = sum;
			B = carry;
		}
		return sum;
	}
};
#endif

//��·������
#include <iostream>
using namespace std;
int pathNum(int n, int m)
{
	if (n > 1 && m > 1)
		return pathNum(n - 1, m) + pathNum(n, m - 1);
	else if (((n >= 1) && (m == 1)) || ((n == 1) && (m >> 1)))
		return n + m;
	else
		return 0;
}
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << pathNum(n, m) << endl;
	}
	return 0;
}
