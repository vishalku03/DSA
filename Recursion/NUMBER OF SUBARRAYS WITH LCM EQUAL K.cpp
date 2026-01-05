
class Solution
{
public:
     int subarrayLCM(vector<int> &nums, int k)
     {
          int n = nums.size();
          int count = 0;
          for (int i = 0; i < n; i++)
          {
               int LCM = nums[i];
               if (LCM == k)
                    count++;

               for (int j = i + 1; j < n; j++)
               {
                    LCM = lcm(LCM, nums[j]);

                    if (LCM == k)
                         count++;

                    if (LCM > k)
                         break;
               }
          }

          return count;
     }
};

// leetcode problem - 2470