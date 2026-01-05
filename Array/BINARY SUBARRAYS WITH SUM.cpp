class Solution
{
public:
     int numSubarraysWithSum(vector<int> &nums, int goal)
     {

          unordered_map<int, int> mp;

          int currSum = 0;
          int ans = 0;
          mp[0] = 1;

          for (int &num : nums)
          {
               currSum += num;

               int remaining_sum = currSum - goal;

               if (mp.find(remaining_sum) != mp.end()) // baki sum kya map me hai, ha hai
               {
                    ans += mp[remaining_sum]; // jitna bar hai usse ans me store
               }
               mp[currSum]++;
          }

          return ans;
     }
};

/* pahle ek map use karengejisme sum ko store kar lenge
2. currsum = 0 to initially map me ek 0  hai
3. 

// leetcode - 930