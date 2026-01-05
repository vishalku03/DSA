#include<bits/stdc++.h>
using namespace std;

    struct Node
{
     int data;
     Node *next;

     Node(int val)
     {
          data = val;
          next = NULL;
     }
};



    class Solution
{
public:
     // Function to remove a loop in the linked list.
     void removeLoop(Node *head)
     {

          Node *slow = head;
          Node *fast = head;

          while (fast != NULL)
          {
               fast = fast->next;
               if (fast != NULL)
               {
                    fast = fast->next;
                    slow = slow->next;
               }
               if (fast == slow)
               {
                    break;
               }
          }
          if (fast == NULL)
          {
               return;
          }

          slow = head;

          while (fast != slow)
          {
               fast = fast->next;
               slow = slow->next;
          }
          Node *startingPoint = fast;
          Node *temp = startingPoint;
          while (temp->next != startingPoint)
          {
               temp = temp->next;
          }
          temp->next = NULL;
     }
};

//GFG 