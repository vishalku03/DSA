#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool ispar(string x)
     {
          stack<int> s;
          int i;
          for (i = 0; i < x.length(); i++)
          {
               if (x[i] == '[' || x[i] == '{' || x[i] == '(')
               {
                    s.push(x[i]);
               }
               else
               {
                    if (s.empty())
                         return false;
                    if (x[i] == ')')
                    {
                         if (s.top() != '(')
                              return false;
                         else
                              s.pop();
                    }
                    if (x[i] == ']')
                    {
                         if (s.top() != '[')
                              return false;
                         else
                              s.pop();
                    }
                    if (x[i] == '}')
                    {
                         if (s.top() != '{')
                              return false;
                         else
                              s.pop();
                    }
               }
          }
          if (!s.empty())
               return false;
          return true;
     }
};

// GFG