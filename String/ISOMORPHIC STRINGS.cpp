#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     // Function to check if two strings are isomorphic.
     bool areIsomorphic(string str1, string str2)
     {
          vector<int> v1(128, -1);
          vector<int> v2(128, -1);

          if (str1.size() != str2.size())
          {
               return false;
          }

          for (int i = 0; i < str1.size(); i++)
          {
               if (v1[str1[i]] != v2[str2[i]])
               {
                    return false;
               }
               v1[str1[i]] = v2[str2[i]] = i;
          }
          return true;
     }
};


//GFG