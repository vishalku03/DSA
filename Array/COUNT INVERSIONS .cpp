#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     long long cnt = 0;

     void merge(long long arr[], int left, int mid, int right)
     {
          int leftSize = (mid - left) + 1, rightSize = right - mid;
          long long leftArr[leftSize], rightArr[rightSize];
          for (int i = 0; i < leftSize; i++)
               leftArr[i] = arr[left + i];
          for (int i = 0; i < rightSize; i++)
               rightArr[i] = arr[mid + 1 + i];
          int l = 0, r = 0, idx = left;
          while (l < leftSize && r < rightSize)
          {
               if (leftArr[l] <= rightArr[r])
               {
                    arr[idx] = leftArr[l++];
               }
               else
               {
                    cnt += (leftSize - l);
                    arr[idx] = rightArr[r++];
               }
               idx++;
          }
          while (l < leftSize)
          {
               arr[idx++] = leftArr[l++];
          }
          while (r < rightSize)
          {
               arr[idx++] = rightArr[r++];
          }
     }

     void mergeSort(long long arr[], int left, int right)
     {
          if (left >= right)
               return;
          int mid = (left + right) / 2;
          mergeSort(arr, left, mid);
          mergeSort(arr, mid + 1, right);
          merge(arr, left, mid, right);
     }
     // arr[]: Input Array
     // N : Size of the Array arr[]
     // Function to count inversions in the array.
     long long int inversionCount(long long arr[], long long N)
     {
          mergeSort(arr, 0, (int)N - 1);
          return cnt;

          
     }
};

// GFG