
// class Solution
// {
// public:
     
//      ListNode*next;
//      int findLength(ListNode *head)
//      {
//           ListNode *temp = head;
//           int length = 0;
//           while (temp != NULL)
//           {
//                length++;
//                temp = temp->next;
//           }
//           return length;
//      }

//      ListNode *middleNode(ListNode *head)
//      {

//           int n = findLength(head);
//           int position = n / 2 + 1;

//           ListNode *temp = head;
//           while (position != 1)
//           {
//                position--;
//                temp = temp->next;
//           }
//           return temp;
//      }

// };

// LEETCODE PROBLEM - 876