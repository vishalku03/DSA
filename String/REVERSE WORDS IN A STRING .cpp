#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     string reverseWords(string s)
     {
          string n = "";
          string m = "";

          for (int i = 0; i < s.length(); i++)
          {
               if (s[i] == ' ')
               {
                    m = m + n + " ";
                    n = "";
               }
               else
               {
                    n = s[i] + n;
               }
          }
          m = m + n;
          return m;
     }
};

// LEETCODE QUESTION -  557