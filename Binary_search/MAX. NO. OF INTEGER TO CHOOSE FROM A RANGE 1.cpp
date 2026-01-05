#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxCount(vector<int> &banned, int n, int maxSum)
     {
          int cnt = 0, sum = 0;
          sort(banned.begin(), banned.end());
          for (int i = 1; i <= n; i++)
          {
               bool ans = binary_search(banned.begin(), banned.end(), i);
               if (ans)
                    continue;
               else
               {
                    if (sum + i <= maxSum)
                    {
                         cnt++;
                         sum += i;
                    }
               }
          }
          return cnt;
     }
};

// LEETCODE PROBLEM - 2554