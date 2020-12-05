#define _CRT_SECURE_NO_WARNINGS

#if 0
//求最小公倍数
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
//另类加法
class UnusualAdd
{
public:
	int addAB(int A, int B)
	{
		int sum = 0, carry = 0;
		while (B != 0)
		{
			//对应位的和
			sum = A ^ B;
			//对应位和的进位，既然是进位，就要整体左移一位
			carry = (A & B) << 1;
			A = sum;
			B = carry;
		}
		return sum;
	}
};
#endif

//求路径总数
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
