#include<bits/stdc++.h>
using namespace std;
bool findPair(int arr[], int size, int n)
{
     sort(arr, arr + size);

     int i = 0;
     int j = 1;
     if (size == 0)
     {
          return false;
     }

     while (j < size)
     {

          if (i == j)
          {
               j++;
          }
          if (arr[j] - arr[i] == n)

          {
               return true;
               i++;
               j--;
          }
          else if (arr[j] - arr[i] > n)
          {
               i++;
          }
          else
          {
               j++;
          }
     }
     return false;
}

// GFG