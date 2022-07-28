#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node* L;
node* R;
};

node* newnode(int data)
{
     node*   newnode=new node;
    newnode->data=data;
    newnode->L=NULL;
    newnode->R=NULL;
    return newnode;
}
void printPostorder(struct node* node)
{
     if (node == NULL)
        return;


     printPostorder(node->L);


     printPostorder(node->R);

     printf("%d ", node->data);
}
void printInorder(struct node* node)
{
     if (node == NULL)
          return;


     printInorder(node->L);


     printf("%d ", node->data);
     printInorder(node->R);
}
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;

     printf("%d ", node->data);


     printPreorder(node->L);


     printPreorder(node->R);
}
int main()
{
        struct node *root=newnode(1);
        root->L=newnode(2);
    root->R           = newnode(3);
     root->L->L     = newnode(4);
     root->L->R   = newnode(5);
     printInorder(root);


}

