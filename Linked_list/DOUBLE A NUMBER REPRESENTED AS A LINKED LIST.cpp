class Solution
{
public:
     ListNode *doubleIt(ListNode *head)
     {
          int carry = multiply(head);
          if (carry)
          {
               head = new ListNode(carry, head);
          }
          return head;
     }

     int multiply(ListNode *head)
     {
          if (!head)
               return 0;
          int carry = head->val * 2 + multiply(head->next);
          head->val = carry % 10;
          return carry / 10;
     }
};

// leetcode - 2816