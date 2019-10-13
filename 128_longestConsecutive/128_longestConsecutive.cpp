// 128_longestConsecutive.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		set<int> s;
		for (int i = 0; i < nums.size(); i++)
			s.insert(nums[i]);
		int maxNum = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (s.count(nums[i] - 1) == 0) {
				int n = 1;
				while (s.count(nums[i] + n))
				{
					n++;
				}
				if (maxNum < n)maxNum = n;
			}
		}
		return maxNum;
	}
};

int main()
{
    return 0;
}

