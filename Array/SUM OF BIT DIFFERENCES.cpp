class Solution
{
public:
     long long sumBitDifferences(int arr[], int n)
     {
          long long ans = 0;
          for (int i = 0; i < 32; ++i)
          {
               long long one = 0;
               for (int j = 0; j < n; ++j)
                    if ((arr[j] & (1 << i)) != 0)
                         ++one;
               long long zero = n - one;
               ans = ans + 2 * one * zero;
          }
          return ans;
     }
};

// GFG