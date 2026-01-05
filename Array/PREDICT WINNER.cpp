class Solution
{
public:
     int solve(vector<int> &nums, int i, int j)
     {
          if (i > j)
               return 0;
          if (i == j)
               return nums[i];
          int opt1 = nums[i] + min(solve(nums, i + 2, j), solve(nums, i + 1, j - 1));
          int opt2 = nums[j] + min(solve(nums, i + 1, j - 1), solve(nums, i, j - 2));
          return max(opt1, opt2);
     }

     bool predictTheWinner(vector<int> &nums)
     {
          int n = nums.size(), totalScore = 0;
          int p1Score = solve(nums, 0, n - 1);
          for (int i = 0; i < n; i++)
               totalScore += nums[i];
          int p2Score = (totalScore - p1Score);

          return p1Score >= p2Score;
     }
};

// leetcode - 486