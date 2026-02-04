

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int getLastMoment(int n, vector<int> &left, vector<int> &right)
     {

          int maxTime = 0;

          for (int i = 0; i < left.size(); i++)
          {
               maxTime = max(maxTime, left[i]);
          }

          for (int i = 0; i < right.size(); i++)
          {
               maxTime = max(maxTime, n - right[i]);
          }

          return maxTime;
     }
};