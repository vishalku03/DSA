class Solution
{
public:
     int pivotInteger(int n)
     {

          int s = 1;
          int e = n;
          int total_sum = (n * (n + 1)) / 2;

          while (s <= e)
          {
               int mid = s + (e - s) / 2;
               int left_halfsum = mid * (mid + 1) / 2;
               int right_halfsum = total_sum - left_halfsum + mid;

               if (left_halfsum == right_halfsum)
                    return mid;

               else if (left_halfsum < right_halfsum)
                    s = mid + 1;

               else
                    e = mid - 1;
          }
          return -1;
     }
};

// leetcode - 2485