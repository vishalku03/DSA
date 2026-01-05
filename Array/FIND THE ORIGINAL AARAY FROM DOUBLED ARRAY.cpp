class Solution
{
public:
     vector<int> findOriginalArray(vector<int> &changed)
     {
          int n = changed.size();
          if (n % 2 != 0)
          {
               return {};
          }

          sort(begin(changed), end(changed));
          map<int, int> mp;
          for (int &num : changed)
          {
               mp[num]++;
          }
          vector<int> ans;

          for (int &num : changed)
          {
               int twice = 2 * num;

               if (mp[num] == 0)
                    continue; // skip
               if (mp.find(twice) == mp.end() || mp[twice] == 0)
               { // yaha twice nhi mila or twice mila to vah 0 ho
                    return {};
               }
               ans.push_back(num); // yaha mil gya hai to ham usee vector me dal denge

               mp[num]--;
               mp[twice]--;
          }
          return ans;
     }
};

// -> logic
// odd check krenge
// phir map me dal denge
// phir mp me twice check kgrenge
// agr mil jayega to ek vector me dal denge aur usse return kar denge
// odd length


// leetcode -  2007