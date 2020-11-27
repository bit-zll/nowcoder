#define _CRT_SECURE_NO_WARNINGS

#if 0
//排序子序列
#include <iostream>
#include <vector>
using namespace std;

// 4
// 1 3 2 3
// 输出：2
// 输入：
// 6
// 3 2 1 1 2 3
// 输出：2

int main()
{
	int n;
	cin >> n;
	vector<int> a;
	//多给一个值，处理上述第三种情况
	a.resize(n + 1);
	a[n] = 0;
	int i;
	for (i = 0; i < n; ++i)
		cin >> a[i];
	i = 0;
	int count = 0;
	while (i < n)
	{
		if (a[i] < a[i + 1])
		{
			while (i < n && a[i] <= a[i + 1])
				i++;

			count++;
			i++;
		}
		else if (a[i] == a[i + 1])
		{
			i++;
		}
		else
		{
			while (i < n && a[i] >= a[i + 1])
				i++;

			count++;
			i++;
		}
	}
	cout << count << endl;
	return 0;
}
#endif

#if 0
//倒置字符串1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	//翻转整个句子
	reverse(s.begin(), s.end());
	//翻转单词
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
			end++;

		reverse(start, end);
		if (end != s.end())
			start = end + 1;
		else
			start = end;
	}
	cout << s << endl;
	return 0;
}
#endif

//倒置字符串2
#include <iostream>
#include <string>
using namespace std;

// cin读取string时自动会被空格分隔开，用另一个字符串存储进行逆序输出
int main()
{
	string s1, s2;
	cin >> s2;
	while (cin >> s1)
		s2 = s1 + " " + s2;
	cout << s2 << endl;
	return 0;
}
