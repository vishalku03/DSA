class Solution
{
public:
     int kthGrammar(int n, int k)
     {

          //  base case pata hona chahiye

          if (n == 1 && k == 1)
               return 0;

          int mid_point = pow(2, n - 1) / 2;
          if (k <= mid_point)
               return kthGrammar(n - 1, k);
          else
               return !kthGrammar(n - 1, k - mid_point);
     }
};

// leetcode -  779