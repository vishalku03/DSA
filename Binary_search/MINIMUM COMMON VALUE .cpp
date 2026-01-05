#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int getCommon(vector<int> &nums1, vector<int> &nums2)
     {
          for (int i = 0; i < nums1.size(); i++)
          {
               int target = nums1[i];
               int s = 0;
               int e = nums2.size() - 1;
               while (e >= s)
               {
                    int mid = e + (s - e) / 2;
                    if (nums2[mid] == target)
                    {
                         return target;
                    }
                    else if (nums2[mid] > target)
                         e = mid - 1;
                    else
                         s = mid + 1;
               }
          }
          return -1;
     }
};

// LEETCODE PROBLEM - 2540