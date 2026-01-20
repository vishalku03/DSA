
/* Implement UNDO & REDO */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     string ans = "";
     string str = "";
     void append(char x)
     {
          ans += x;
     }

     void undo()
     {
          if (!ans.empty())
          {
               str.push_back(ans.back());
               ans.pop_back();
          }
     }

     void redo()
     {
          if (!str.empty())
          {
               ans.push_back(str.back());
               str.pop_back();
          }
     }

     string read()
     {
          return ans;
     }
};