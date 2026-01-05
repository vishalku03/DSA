class Solution
{
public:
     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
     {
          if (list1 == NULL)
               return list2;
          if (list2 == NULL)
               return list1;
          ListNode *temp = new ListNode();
          if (list1->val < list2->val)
          {
               temp->val = list1->val;
               temp->next = mergeTwoLists(list1->next, list2);  // RC
          }
          else
          {
               temp->val = list2->val;
               temp->next = mergeTwoLists(list1, list2->next);  // RC
          }
          return temp;
     }
};
// LEETCODE PROBLEM - 21