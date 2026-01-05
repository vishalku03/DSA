class Solution
{
public:
     int maximumStrongPairXor(vector<int> &nums)
     {
          int maxi = INT_MIN;
          int left = 0;

          sort(nums.begin(), nums.end());

          for (int right = 0; right < nums.size() - 1; right++)
          {
               while (right < nums.size() &&
                      min(nums[left], nums[right]) >= abs(nums[left] - nums[right]))
               {
                    maxi = max(maxi, (nums[left] ^ nums[right]));
                    right++;
               }
               left++;
               right = left - 1;
          }

          if (maxi == INT_MIN)
               return 0;
          else
               return maxi;

          // BRUTE FORCE APPROACH
          // int ans  = 0;
          // int n = nums.size();
          // for(int i =0;i<n;i++)
          // {
          //     for(int j = 0;j<n;j++)
          //     {
          //         if(abs(nums[i]-nums[j])<=min(nums[i] , nums[j])){
          //         ans = max(ans , nums[i] ^ nums[j]);
          //         }
          //     }
          // }
          // return ans;
     }
};

// leetcode  - 2932