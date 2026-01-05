#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int subsetXORSum(vector<int> &nums)
     {
          int result = 0;
          for (int n : nums)
          {
               result = result | n;
          }
          return result << (nums.size() - 1);
     }
};

// LEETCODE QUESTION- 1863