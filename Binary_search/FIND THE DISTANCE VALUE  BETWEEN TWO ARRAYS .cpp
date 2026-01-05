#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     bool isValid(vector<int> &arr, int target, int d)
     {
          int s = 0;
          int e = arr.size() - 1;

          while (s <= e)
          {
               int mid = s + (e - s) / 2;

               if (abs(arr[mid] - target) <= d)
               {
                    return false;
               }
               else if (arr[mid] < target)
               {
                    s = mid + 1;
               }
               else
               {
                    e = mid - 1;
               }
          }
          return true;
     }

     int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
     {

          sort(arr2.begin(), arr2.end());

          int count = 0;
          for (auto num : arr1)
          {
               if (isValid(arr2, num, d))
               {
                    count++;
               }
          }

          return count;
     }
};

//LEETCODE PROBLEM - 1385