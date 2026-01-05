class Solution
{
public:
     vector<int> findKDistantIndices(vector<int> &nums, int key, int k)
     {

          // brute force appeoach
          vector<int> ans;
          int n = nums.size();
          for (int i = 0; i < n; i++)
          {
               int a = -1;
               for (int j = 0; j < n; j++)
               {
                    if (abs(i - j) <= k && nums[j] == key)
                         a = i;
               }
               if (a != -1)
                    ans.push_back(a);
          }
          return ans;
     }
};

// leetcode - 2200