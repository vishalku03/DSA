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

/*  Minimum ASCII Delete Sum for Two Strings  */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int minimumDeleteSum(string s1, string s2)
     {
          int n = s1.size();
          int m = s2.size();

          vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

          for (int i = 1; i <= n; i++)
          {
               for (int j = 1; j <= m; j++)
               {
                    if (s1[i - 1] == s2[j - 1])
                         dp[i][j] = dp[i - 1][j - 1] + s1[i - 1];
                    else
                         dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
               }
          }

          int sum = 0;
          for (char c : s1)
               sum += c;
          for (char c : s2)
               sum += c;

          return sum - 2 * dp[n][m];
     }
};
