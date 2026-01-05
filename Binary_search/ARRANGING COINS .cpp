#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int arrangeCoins(int n)
     {

          long long int s = 1;
          long long int e = n;
          long long row;

          while (s <= e)
          {
               long long int mid = s + (e - s) / 2;
               long long int fullcoins = mid * (mid + 1) / 2; // n(n+n)/2;

               if (fullcoins > n)
               {
                    e = mid - 1;
               }
               else if (fullcoins < n)
               {
                    row = mid; // possible coins
                    s = mid + 1;
               }
               else
               {
                    return mid;
               }
          }
          return row;
     }
};

// LEETCODE PROBLEM - 441