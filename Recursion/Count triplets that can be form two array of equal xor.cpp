class Solution
{
public:
     int countTriplets(vector<int> &arr)
     {

          int count = 0;
          int n = arr.size();
          for (int i = 0; i < n; i++)
          {
               for (int j = i + 1; j < n; j++)
               {
                    arr[i] = arr[i] ^ arr[j];
                    if (arr[i] == 0)
                         count = count + (j - i);
               }
          }
          return count;
     }
};

// leetcode problem -  1442