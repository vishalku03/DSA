/* Substrings with K Distinct */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     long long AtMostK(string &s, int k)
     {
          if (k < 0)
               return 0;

          int mp[26] = {0};
          int dist = 0;
          int l = 0;
          int ans = 0;

          for (int i = 0; i < s.size(); i++)
          {
               if (mp[s[i] - 'a'] == 0)
                    dist++;
               mp[s[i] - 'a']++;

               while (dist > k)
               {
                    mp[s[l] - 'a']--;
                    if (mp[s[l] - 'a'] == 0)
                         dist--;
                    l++;
               }

               ans += (i - l + 1);
          }
          return ans;
     }

     long long countSubstr(string s, int k)
     {
          return AtMostK(s, k) - AtMostK(s, k - 1);
     }
};
