#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* LE;
node* RI;
};
node* newnode(int data);
void printPostorder(struct node* node);
void printInorder(struct node* node);
void printPreorder(struct node* node);


int main()
{
        struct node *root=newnode(1);
        root->LE=newnode(2);
    root->RI           = newnode(3);
     root->LE->LE    = newnode(4);
     root->LE->RI   = newnode(5);
     printInorder(root);


}

node* newnode(int data)
{
     node*   newnode=new node;
    newnode->data=data;
    newnode->LE=NULL;
    newnode->RI=NULL;
    return newnode;
}
void printPostorder(struct node* node)
{
     if (node == NULL)
        return;


     printPostorder(node->LE);


     printPostorder(node->RI);

     printf("%d ", node->data);
}
void printInorder(struct node* node)
{
     if (node == NULL)
          return;


     printInorder(node->LE);


     printf("%d ", node->data);
     printInorder(node->RI);
}
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;

     printf("%d ", node->data);


     printPreorder(node->LE);


     printPreorder(node->RI);
}

