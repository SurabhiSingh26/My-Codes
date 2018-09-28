//https://github.com/SurabhiSingh26/My-Codes/new/master/geeksforgeeks/linked_list
// C program to find n'th node in linked list
#include <stdio.h>
#include <stdlib.h>
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
};
 
/* Given a reference (pointer to pointer) to the head
    of a list and an int, push a new node on the front
    of the list. */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
 
int GetNth(struct node* head, int index);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    
    scanf("%d",&T);
    
    while(T--){
    struct node *head = NULL;
        
        scanf("%d%d",&n,&k);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&l);
            push(&head,l);
        }
   
    printf("%d
", GetNth(head, n-k));  
    getchar();
    }
    return 0;
}

int GetNth(struct node* head, int index)
{
   for(int i =0;i<index; i++)
   {
       head = head->next;
   }
   return head->data;
}
