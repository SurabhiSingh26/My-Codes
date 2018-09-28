//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1/?ref=self
// C program to detect loop in a linked list
#include<stdio.h>
#include<stdlib.h>
/* Link list node */
struct node
{
    int data;
    struct node* next;
};
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
          (struct node*) malloc(sizeof(struct node));
    /* put in the data  */
    new_node->data  = new_data;
    /* link the old list off the new node */
    new_node->next = (*head_ref);
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
int detectloop(struct node *list);
/* Drier program to test above function*/
int main()
{
	int t,n,c,x,i;
	scanf("%d",&t);
	while(t--){
    /* Start with the empty list */
    scanf("%d",&n);
    struct node *head = NULL;
    struct node* temp;
    struct node *s;
    scanf("%d",&x);
    push(&head,x);
    s=head;
    for(i=1;i<n;i++){
		scanf("%d",&x);
    push(&head,x);}
    /* Create a loop for testing */
   scanf("%d",&c);
    if(c>0){
    c=c-1;
    temp=head;
    while(c--)
    temp=temp->next;
    s->next=temp;
	}
	int g=detectloop(head);
    if(g)
    printf("True
");
    else
    printf("False
");
	}
    return 0;
}
int detectloop(struct node *list)
{
    
      struct node  *slow;
      slow = list;
      struct node *fast;
      fast = list;
   
    while (slow && fast && fast->next!=NULL ) 
    { 
        slow = slow->next; 
        fast  = fast->next->next; 
        if (slow == fast) 
        { 
           return 1; 
        } 
    } 
    return 0;
}
