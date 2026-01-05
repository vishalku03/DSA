class Solution
{
public:
     int maxProduct(int arr[], int n)
     {
          int max = -1;
          int smax = -1;

          for (int i = 0; i < n; i++)
          {
               if (arr[i] > max)
               {
                    smax = max;
                    max = arr[i];
               }
               else if (arr[i] > smax)
               {
                    smax = arr[i];
               }
          }
          return smax * max;
     }
};

// GFG PROBLEM - MAXIMUM PRODUCT OF TWO NUMBERS