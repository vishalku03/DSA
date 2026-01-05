class Solution
{
public:
     int maxCoins(vector<int> &piles)
     {
          int n = piles.size();
          sort(begin(piles), end(piles));

          int result = 0;
          for (int me = n / 3; me < n; me += 2) //
          {
               result = result + piles[me];
          }

          return result;
     }
};

// leetcode problem -1561