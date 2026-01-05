#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     char nextGreatestLetter(vector<char> &letters, char target)
     {
          int s = 0, e = letters.size() - 1;
          while (s <= e)
          {
               int mid = (s + e) / 2;
               if (letters[mid] > target)
                    e = mid - 1;
               else
                    s = mid + 1;
          }
          return (s < 0 || s >= letters.size()) ? letters[0] : letters[s];
     }
};

// LEETCODE PROBLEM - 744