//https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
struct Node* deleteNode(struct Node *head,int );
void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "
";
}
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
  // TO BE REMOVED
  for (int i=0; i<2000; i++);
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
	int kk;
	cin>>kk;
    head = deleteNode(head,kk);
    printList(head);
    }
    return 0;
}
Node* deleteNode(Node *head,int x)
{
    
     Node *mainhead;
    mainhead = head;
    if(x==1)
    {
        head = head->next;
        return head;
    }
    else
    {
    for(int i =1; i<x-1; i++)
    {
        head = head->next;
    }
    head->next = head->next->next;
    }
    return mainhead;
}
