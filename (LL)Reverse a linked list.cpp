//Given a linked list of N nodes. The task is to reverse this list.
/*
Example:
Input:
2
6
1 2 3 4 5 6
5
2 7 8 9 10
Output:
6 5 4 3 2 1
10 9 8 7 2
Explanation:
Testcase 1: After reversing the list, elements are 6->5->4->3->2->1.
Testcase 2: After reversing the list, elements are 10->9->8->7->2.
*/
struct Node* reverseList(struct Node *head)
{
  Node * prev = NULL;
  Node * next = head;
  while(head != NULL){
      next = head->next;
      head->next = prev;
      prev = head;
      head = next;
  }
  return prev;
}
