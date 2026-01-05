#include<bits/stdc++.h>

using namespace std;
class Solution
{
public:
     string defangIPaddr(string address)
     {

          string ans = "";
          for (auto ch : address)
          {
               if (ch != '.')
                    ans = ans + ch;
               else

                    ans = ans + "[.]";
          }
          return ans;
     }
};
/* this question is leetcode .
int this question , '.'  replaced by [.] .
leetcode number 1108
*/