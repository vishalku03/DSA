#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     string replaceDigits(string s)
     {
          for (int i = 1; i < s.length(); i = i + 2)
          {
               s[i] = s[i] + s[i - 1] - '0';
          }
          return s;
     }
};

// leetcode problem - 1844