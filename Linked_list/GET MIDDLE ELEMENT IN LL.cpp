class Solution
{
public:
     int findLength(Node *&head)
     {
          Node *temp = head;
          int len = 0;
          while (temp != NULL)
          {
               len++;
               temp = temp->next;
          }
          return len;
     }

     int getMiddle(Node *head)
     {
          int n = findLength(head);
          int position = n / 2 + 1;

          while (position != 1)
          {
               position--;
               head = head->next;
          }
          return head->data;
     }
};

// GFG