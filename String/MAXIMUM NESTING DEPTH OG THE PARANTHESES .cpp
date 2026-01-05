#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxDepth(string s)
     {
          int maxCount = 0;
          int count = 0;

          stack<char> st;

          for (int i = s.size() - 1; i >= 0; i--)
          {
               if (s[i] == ')')
               {
                    st.push(s[i]);
                    count++;
               }
               else if (s[i] == '(')
               {
                    st.pop();
                    count--;
               }
               maxCount = max(maxCount, count);
          }
          return maxCount;
     }
};

// LEETCODE PROBLEM -  1614