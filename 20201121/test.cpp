#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
//由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
#include <vector>
#if 0
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
#endif

#if 0
//杨辉三角
class Solution
{
public:
	vector<vector<int>> generate(int numRows)
	{
		vector<vector<int>>  vv;
		vv.resize(numRows);
		for (size_t i = 1; i <= numRows; ++i)
		{
			vv[i - 1].resize(i, 0);

			vv[i - 1][0] = 1;
			vv[i - 1][i - 1] = 1;
		}
		for (size_t i = 0; i < vv.size(); ++i)
		{
			for (size_t j = 0; j < vv[i].size(); ++j)
			{
				if (vv[i][j] == 0)
				{
					vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
				}
			}
		}
		return vv;
	}
};
#endif

#if 0
//只出现一次数字
class Solution
{
public:
	int singleNumber(vector<int>& nums)
	{
		int value = 0;
		for (auto e : nums)
			value ^= e;
		return value;
	}
};
#endif

//连续子数最大和
class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int sz = array.size();
		vector<int> dp(sz + 1, 0);
		int ret = array[0];
		for (int i = 1; i <= sz; i++)
		{
			dp[i] = max(array[i - 1], dp[i - 1] + array[i - 1]);
			ret = max(dp[i], ret);
		}
		return ret;
	}
};