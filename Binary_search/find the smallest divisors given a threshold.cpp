class Solution
{
public:
     int checkk(int mid, vector<int> &nums)
     {
          int sum = 0;

          for (int i = 0; i < nums.size(); i++)
          {
               int x = ceil((double)nums[i] / mid);
               sum += x;
          }
          return sum;
     }
     int smallestDivisor(vector<int> &nums, int threshold)
     {

          int st = 1;
          int end = *max_element(nums.begin(), nums.end());
          int minn = INT_MAX;
          while (st < end)
          {
               int mid = (st + end) / 2;
               int numb = checkk(mid, nums);
               if (numb <= threshold)
               {
                    minn = min(mid, minn);
                    end = mid;
               }
               else
               {
                    st = mid + 1;
               }
          }
          return st;
     }
};

// leetcode - 1283