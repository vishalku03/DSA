#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maximumGroups(vector<int> &grades)
     {
          int s = 1;
          int e = grades.size();
          int n = grades.size();
          while (s <= e)
          {
               long long mid = s + (e - s) / 2;
               long long sum = mid * (mid + 1) / 2;

               if (sum == n)
               {
                    return mid;
               }
               else if (sum > n)
               {
                    e = mid - 1;
               }
               else
               {
                    s = mid + 1;
               }
          }
          return e;
     }
};

// LEETCODE PROBLEM - 2358