#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     string toLowerCase(string s)
     {

          transform(s.begin(), s.end(), s.begin(), ::tolower);
          return s;

          // BRUTE FORCE
          //   for(int i =0;i<s.length();i++)
          //   {
          //       if(s[i]>='A'  && s[i] <= 'Z')
          //       s[i] = s[i] +('a'-'A');
          //   }
          //   return s;
     }
};

// LEETCODE QUESTION -  709