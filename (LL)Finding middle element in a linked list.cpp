//Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, 
//if given linked list is 1->2->3->4->5 then the output should be 3.
//If there are even nodes, then there would be two middle nodes, we need to print the second middle element. 
//For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.
/*
Example:
Input:
2
5
1 2 3 4 5
6
2 4 6 7 5 1

Output:
3
7
Explanation:
Testcase 1: Since there are 5 elements, therefore 3 is the middle element at index 2 (0-based indexing).
*/
int getMiddle(Node *head)
{
   Node *temp1=head, *temp2=head;
   int count=1;
   while(temp1->next!=NULL)
   {
       temp1=temp1->next;
       count++;
       if(count%2==0)
       {
           temp2=temp2->next;
       }
   }
   return temp2->data;
}
