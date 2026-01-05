#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool isPerfectSquareHelper(int num)
     {
          int s = 0;
          int e = num;
          while (s <= e)
          {
               long long int mid = s + (e - s) / 2;

               if (mid * mid == num)
               {
                    return true;
               }
               else if ((mid * mid) > num)
               {
                    e = mid - 1;
               }
               else
               {
                    s = mid + 1;
               }
          }
          return false;
     }
     bool isPerfectSquare(int num)
     {
          return isPerfectSquareHelper(num);
     }
};

// LEETCODE PROBLEM -  367