#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     string removeDups(string S)
     {
          int n = S.length();

          string ans = "";
          vector<int> v(26, 0);

          for (int i = 0; i < n; i++)
          {
               if (v[S[i] - 'a'] == 0)   // koi pahle aaya hai ya nhi
               {
                    ans = ans + S[i];
                    v[S[i] - 'a']++;
               }
          }
          return ans;
     }
};

// gfg