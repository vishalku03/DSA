class Solution
{
public:
     int compress(vector<char> &chars)
     {
          int n = chars.size();
          int index = 0;
          int i = 0;
          while (i < n)
          {
               char curr_char = chars[i];
               int count = 0;

               while (i < n && chars[i] == curr_char)
               {
                    count++;
                    i++;
               }

               chars[index] = curr_char; // yaha par ham assign  kar rhe hai index me
               index++;

               if (count > 1)
               {                                         // agr count 2 digit vala hoga  vha pe assign ho rha hai
                    string count_str = to_string(count); // integer ko string me change kar rhe hai

                    for (char &ch : count_str)
                    {
                         chars[index] = ch;
                         index++;
                    }
               }
          }
          return index;
     }
};
// leetcode problem -  443