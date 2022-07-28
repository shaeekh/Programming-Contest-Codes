#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* L;
    struct node* R;
};


int hight(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
       int LD = hight(node->L);
       cout<<"Current Left height is "<<LD+1<<endl;
       int RD = hight(node->R);
       cout<<"Current Right height is "<<RD<<endl;
       if (LD > RD)
           return(LD+1);
       else return(RD+1);
   }
}


struct node* newNode(int data)
{
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->L = NULL;
    node->R = NULL;

    return(node);
}
/*
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;

     printf("%d ", node->data);


     printPreorder(node->L);


     printPreorder(node->R);
}
void printPostorder(struct node* node)
{
     if (node == NULL)
        return;


     printPostorder(node->L);


     printPostorder(node->R);

     printf("%d ", node->data);
}
*/
void printInorder(struct node* node)
{
     if (node == NULL)
          return;


     printInorder(node->L);


     printf("%d  ", node->data);
     printInorder(node->R);
}

int main()
{
    struct node *root = newNode(43);

    root->L = newNode(242);
    root->R = newNode(32);
    root->L->L = newNode(41);
    root->L->R = newNode(35);
    root->L->R->L=newNode(12);
     printInorder(root);
     printf("\n");

    printf("\n\nFinal height is %d\n", hight(root));

    return 0;
}
