#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     void rearrange(int arr[], int n)
     {
          vector<int> positv;
          vector<int> negtive;

          for (int i = 0; i < n; i++)
          {
               if (arr[i] >= 0)
                    positv.push_back(arr[i]);
               else
                    negtive.push_back(arr[i]);
          }

          int k = 0, i = 0, j = 0;

          while (i < positv.size() && j < negtive.size())
          {
               arr[k++] = positv[i++];
               arr[k++] = negtive[j++];
          }

          while (i < positv.size())
               arr[k++] = positv[i++];
          while (j < negtive.size())
               arr[k++] = negtive[j++];
     }
};

// GEEKSFORGEEKS QUESTIONA