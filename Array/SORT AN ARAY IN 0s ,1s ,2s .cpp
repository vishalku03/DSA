#include<bits/stdc++.h>

using namespace std;
class Solution
{
public:
     void sort012(int arr[], int n)
     {
          int l = 0;
          int h = n - 1;
          int m = 0;

          while (m <= h)
          {
               if (arr[m] == 0)
               {
                    swap(arr[l], arr[m]);
                    l++;
                    m++;
               }
               else if (arr[m] == 2)
               {
                    swap(arr[m], arr[h]);
                    h--;
               }
               else
               {
                    m++;
               }
          }
     }
};

// GFG