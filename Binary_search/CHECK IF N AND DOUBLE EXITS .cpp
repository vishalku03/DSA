#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool checkIfExist(vector<int> &arr)
     {

          // BRUTE FORCE APPROACH

          /*
                int n = arr.size();
                for(int i = 0;i<n;i++)
                {
                    for(int j = i+1;j<n;j++)
                    {
                        if(2*arr[i]==arr[j] || (arr[i] == 2*arr[j]))
                        {
                            return true;
                        }
                    }
                }
                return false;

                time complexity -  n2;*/ 
          set<int> check;
          for (int element : arr)
          {
               if (check.count(2 * element) > 0 || (element % 2 == 0 && check.count(element / 2) > 0))
                    return true;
               check.insert(element);
          }
          return false;
     }
};

//LEETCIDE PROBLEM - 1346