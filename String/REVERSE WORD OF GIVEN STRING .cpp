#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     // Function to reverse words in a given string.
     string reverseWords(string s)
     {
          string temp = "";
          string result = "";

          for (int i = s.length() - 1; i >= 0; i--)
          {
               if (s[i] == '.')
               {
                    temp = temp + s[i];
                    result = result + temp;
                    temp = "";
               }

               else
               {
                    temp = s[i] + temp;
               }
          }

          result = result + temp;
          return result;
     }
};

// GFG