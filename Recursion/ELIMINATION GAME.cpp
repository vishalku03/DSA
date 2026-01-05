#include<bits/stdc++.h>
using  namespace std;
class Solution
{
public:
     int lastRemaining(int n)
     {
          if (n == 1)
               return 1;
          int a = lastRemaining(n / 2);

          return (2 * (n / 2 + 1 - a));
     }
};

// LEETCODE PROBLEM - 390