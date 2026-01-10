/* Minimum Window Subsequence */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     string minWindow(string &s1, string &s2)
     {

          int n = s1.length();
          int m = s2.length();
          int min = INT_MAX;
          int start = -1;

          string ans = "";
          for (int i = 0; i <= n - m; i++)
          {
               if (s1[i] != s2[0])
               {
                    continue;
               }
               else
               {
                    int p = i;
                    int j = 0;
                    while (p < n && j < m)
                    {
                         if (s1[p] == s2[j])
                         {
                              j++;
                         }
                         p++;
                    }
                    p--;

                    int curr = p - i + 1;
                    if (j == m && curr < min)
                    {
                         min = curr;
                         start = i;
                    }
               }
          }

          if (start == -1)
               return "";
          return s1.substr(start, min);
     }
};
