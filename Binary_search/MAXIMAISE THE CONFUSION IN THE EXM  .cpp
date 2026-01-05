#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int solve(string ans, int k, char x)
     {
          int i = 0, j = 0, ctr = 0, n = ans.size(), temp = 0;
          while (j < n)
          {
               if (ans[j] == x)
                    ctr++;
               while (i < n && ctr > k)
               {
                    if (ans[i] == x)
                         ctr--;
                    i++;
               }
               temp = max(temp, j - i + 1);
               j++;
          }
          return temp;
     }
     int maxConsecutiveAnswers(string ans, int k)
     {
          int a = solve(ans, k, 'T');
          int b = solve(ans, k, 'F');
          return max(a, b);
     }
};

// 2024