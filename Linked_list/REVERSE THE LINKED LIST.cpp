class Solution
{
public:
     // Function to reverse a linked list.
     struct Node *reverseList(struct Node *head)
     {
          // code here
          // return head of reversed list
          Node *prev = NULL;
          Node *curr = head;
          while (curr != NULL)
          {
               Node *nextNode = curr->next;
               curr->next = prev;
               prev = curr;
               curr = nextNode;
          }
          return prev;
     }
};

// gfg
// example - before reverse -  1, 2,3,4,5
//           after reverse - 5,4,3,2,1