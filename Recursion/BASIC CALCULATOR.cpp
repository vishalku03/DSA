#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int calculate(string s)
     {
          int i = 0;
          return help(i, s, s.size());
     }
     int help(int &i, string &s, int n)
     {
          int ans = 0;
          int j = i;
          int negFlag = false;
          // cout<<i<<" called"<<endl;
          while (i < n && s[i] != ')')
          {
               int num = 0;
               while (i < n && s[i] >= '0' && s[i] <= '9')
               {
                    num = num * 10 + (s[i] - '0');
                    i++;
               }
               if (s[i] == '(')
               {
                    i++;
                    num = help(i, s, n);
                    i++;
               }
               // cout<<i<<" "<<num<<" "<<ans<<endl;
               ans += (negFlag ? -num : num);
               if (s[i] == ')')
                    break;
               if (i < n && s[i] == '-')
                    negFlag = true;
               if (i < n && s[i] == '+')
                    negFlag = false;
               i++;
          }
          // cout<<i<<" "<<ans<<"giving"<<endl;
          return ans;
     }
};

// LEETCODE PROBLEM -  224