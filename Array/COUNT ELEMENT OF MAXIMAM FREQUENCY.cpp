class Solution
{
public:
     int maxFrequencyElements(vector<int> &nums)
     {

          unordered_map<int, int> mp;
          int maxFre = 0;
          for (int num : nums)
          {
               mp[num]++;

               maxFre = max(maxFre, mp[num]);
          }

          int maxEle = 0;
          for (auto j : mp)
          {
               int currEl = j.second;
               if (currEl == maxFre)
               {
                    maxEle++;
               }
          }

          return maxFre * maxEle;
     }
};

// LEETCODE PROBLEM  3005