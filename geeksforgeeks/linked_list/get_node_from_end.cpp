//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
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
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
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
/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
    printf("%d
", getNthFromLast(head, k));
    }
    return 0;
}
int countnodes(Node *head)
{
    int count = 0;
    while(head!=NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}
int getNthFromLast(Node *head, int n)
{
     int a = countnodes(head);
     if(a<n)
     return -1;
     else
     {
     for(int i =0; i<a-n;i++)
     {
         head = head->next;
     }
     return head->data;
     }
}
