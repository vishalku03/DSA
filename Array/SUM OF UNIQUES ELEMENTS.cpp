#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int sumOfUnique(vector<int> &nums)
     {

          unordered_map<int, int> mp;
          for (auto x : nums)
          {
               mp[x]++;
          }

          int sum = 0;
          for (auto x : mp)
          {
               if (x.second == 1)
               {
                    sum = sum + x.first;
               }
          }

          return sum;
     }
};

// LEETCODE PROBLEM - 1748