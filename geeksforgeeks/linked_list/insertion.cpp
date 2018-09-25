//https://practice.geeksforgeeks.org/problems/linked-list-insertion/1
//code for insertion at the end and insertion at the start
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insertAtBegining(struct node** headRef, int newData);
void insertAtEnd(struct node** headRef, int newData);
void printList(struct node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<' ';
        node = node->next;
    }
    cout<<'
';
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, ch, tmp;
        struct node* head = NULL;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp>>ch;
            if(ch) insertAtEnd(&head, tmp);
            else insertAtBegining(&head, tmp);
        }
        printList(head);
    }
    return 0;
}

}


void insertAtBegining(struct node** headRef, int newData)
{
    node *root;
    root = *headRef;
    node *temp = new node;
    temp->data = newData;
    temp->next = NULL;
    if(root==NULL)
        {
            root = temp;
            *headRef = root;
        }
    else
        {
            temp->next = root;
            root = temp;
            *headRef = root;
        }
}

void insertAtEnd(struct node** headRef, int newData)
{
    node *root;
    root = *headRef;
    node *temp = new node;
    temp->data = newData;
    temp->next = NULL;
    if(root==NULL)
    {
        root = temp;
        *headRef = root;
        //cout<<"\n"<<root->data<<",,";
    }
    else
    {
        while(root->next!=NULL)
        {
            root = root->next;
           // cout<<",,"<<"\n";
        }
        root->next = temp;
    }
}
