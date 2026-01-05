class Solution
{
public:
     int maxNumOfMarkedIndices(vector<int> &nums)
     {
          sort(nums.begin(), nums.end());
          int n = nums.size() - 1;
          int i = n / 2;
          int j = n;
          int ans = 0;

          while (i >= 0 && j > n / 2)
          {
               if (nums[i] * 2 <= nums[j])
               {
                    ans = ans + 2;
                    i--;
                    j--;
               }
               else
                    i--;
          }
          return ans;
     }
};

// leetcode -2576