#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     int minOperations(vector<int> &nums)
     {
          int count = 0;
          for (int i = 1; i < nums.size(); i++)
          {
               if (nums[i] <= nums[i - 1])
               {
                    int change = nums[i - 1] - nums[i] + 1;
                    count = count + change;
                    nums[i] = nums[i] + change;
               }
          }
          return count;
     }
};

// LEETCODE PROBLEM  - 1827