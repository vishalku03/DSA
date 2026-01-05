#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int countAsterisks(string s)
     {
          int ans = 0;
          bool between = false;
          for (char ch : s)
          {
               if (ch == '*' && !between)
                    ans++;
               else if (ch == '|')
                    between = !between;
          }

          return ans;
     }
};

// LEETCODE QUESTION - 2315