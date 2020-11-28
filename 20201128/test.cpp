#define _CRT_SECURE_NO_WARNINGS

#if 0
//字符串中找出连续最长的数字串
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, res, cur;
	cin >> str;
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur += str[i];
		}
		else
		{
			if (res.size() < cur.size())
				res = cur;
			else
				cur.clear();
		}
	}
	cout << res;
	return 0;
}
#endif

//数组中出现次数超过一半的数字
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int half = numbers.size() / 2;
		int count = 1;
		int num;
		for (int i = 0; i < numbers.size(); i++)
		{
			num = numbers[i];
			for (int j = i + 1; j < numbers.size(); j++)
			{
				if (num == numbers[j])
					count++;
			}
			if (count > half)
				return num;
			count = 1;
		}
		return 0;
	}
};
