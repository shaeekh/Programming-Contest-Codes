#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node* LE;
    node* RI;

};

struct node* makeTreeNode(int item)
{
   struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->LE=NULL;
    temp->RI=NULL;
    return temp;


}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->LE);
        printf("%d  ", root->key);
        inorder(root->RI);
    }
}
struct node* insertit(struct node* cur,int item)
{
    if(cur==NULL)
    cur=makeTreeNode(item);
    else if(item<cur->key)
    {
        cur->LE=insertit(cur->LE,item);
    }
    else if(item>cur->key)
    {
        cur->RI=insertit(cur->RI,item);
    }
return cur;

}
struct node* searchit(struct node* root, int key)
{

    if (root == NULL)
    printf("Doesn't exist in tree\n");
    else if (root->key == key)
    printf("Found!!\n");



    else if (root->key < key)
       return searchit(root->RI, key);

    else
    return searchit(root->LE, key);
}
int main()
{
    printf("How many nodes\n");
    int n;
    cin>>n;
    int item;
    struct node* root=NULL;
    printf("What is the root?\n");
    int nap;
    cin>>nap;
    root=insertit(root,nap);
    printf("The other inserting nodes are\n");
    for (int i=1;i<n;i++)
    {
        cin>>item;
        insertit(root,item);
    }
  //  printf("Applying inorder traversal the present tree is \n");

//inorder(root);
printf("What is the number you want to search for?\n");
int num;
cin>>num;
searchit(root,num);


}
