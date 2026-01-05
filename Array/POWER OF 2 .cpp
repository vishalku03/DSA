class Solution
{
public:
     // Function to check if given number n is a power of two.
     bool isPowerofTwo(long long n)
     {

          return (n > 0) && ((n & (n - 1)) == 0);
   

     // BRUTE FORCE 
          // int a = 0;
          // while(N>0)
          // {
          //     if(N%2==1)
          //     {
          //         ++a;
          //     }
          //     N = N/2;
          // }

          // if(a == 1)
          // {
          //     return true;
          // }

          // return false;
     }
};