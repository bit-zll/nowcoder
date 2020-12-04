#define _CRT_SECURE_NO_WARNINGS

#if 0
//斐波那契数列
#include <iostream>
using namespace std;

int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int main()
{
	int N, f, l = 0, r = 0, f0 = 0, f1 = 1;
	cin >> N;
	while (1)
	{
		f = f0 + f1;
		f0 = f1;
		f1 = f;
		//找到比N小且距离N最近的数，求出距离
		if (f < N)
			l = N - f;
		//找到比N大且距离N最近的数，求出距离
		else
		{
			r = f - N;
			break;
		}
	}
	cout << min(l, r) << endl;
	return 0;
}
#endif

//合法括号序列判断
//第一种
class Parenthesis
{
public:
	bool chkparenthesis(string A, int n)
	{
		stack<char> sc;
		for (auto ele : A)
		{
			switch (ele)
			{
			case '(':
				sc.push(ele);
				break;
			case ')':
			{
				if (sc.empty() || sc.top() != '(')
					return false;
				else
					sc.pop();
			}
				break;
			default:
				return false;
			}
		}
		return true;
	}
};
//第二种
class Parenthesis
{
public:
	bool chkparenthesis(string A, int n)
	{
		int left = 0, right = 0, m = 0;
		for (int i = 0; i < A.size(); ++i)
		{
			if (A[i] == '(')
			{
				++left;
				m = left;
			}
			else if (A[i] == ')')
			{
				++right;
				m = left - right;
				if (m < 0)
					return false;
			}
			else
				return false;
		}
		if (m != 0)
			return false;
		return true;
	}
};
