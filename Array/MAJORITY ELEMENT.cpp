#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     int majorityElement(int a[], int size)
     {

          unordered_map<int, int> m;

          for (int i = 0; i < size; i++)
          {
               m[a[i]]++;
          }

          for (auto it : m)
          {
               if (it.second > (size / 2))
               {
                    return it.first;
               }
          }
          return -1;
     }
};

// GFG