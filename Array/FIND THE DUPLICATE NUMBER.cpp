class Solution
{
public:
     int findDuplicate(vector<int> &nums)
     {
          sort(nums.begin(), nums.end());
          int n = nums.size();
          int i = 0;
          int j = i + 1;
          while (i < j)
          {
               if (nums[i] == nums[j])
               {
                    return nums[i];
               }
               else
               {
                    i++;
                    j++;
               }
          }
          return -1;
     }
};

// leetcode - 287