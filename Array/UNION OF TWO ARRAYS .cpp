#include<bits/stdc++,h>

using namespace std;
class Solution
{
public:
     // Function to return the count of number of elements in union of two arrays.
     int doUnion(int a[], int n, int b[], int m)
     {
          // code here

          unordered_set<int> s(a, a + n);
          s.insert(b, b + m);
          return s.size();
     }
};


// GEEKS FOR GEEKS 