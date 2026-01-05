class Solution
{
public:
     long long findTheArrayConcVal(vector<int> &nums)
     {
          long long ans = 0;
          int i = 0;
          int j = nums.size() - 1;

          while (i < j)
          {
               ans = ans + stoi(to_string(nums[i]) + to_string(nums[j]));
               i++;
               j--;
          }
          if (nums.size() % 2 != 0)
               ans += nums[nums.size() / 2];
          return ans;
     }
};

// to_string -> means ham isse string me convert  kar  rhe hai
// stoi -> means ham string se integr me convert kar rhe hai

// leetcode problem - 2562