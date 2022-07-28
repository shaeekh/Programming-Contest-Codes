#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
struct Node*head;
void print()
{
    struct Node* p;
    p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }

}


int main()
{
    head=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=3;
    //cout<<head->data<<endl;
    struct Node* second=NULL;

    second=(struct Node*)malloc(sizeof(struct Node));
     head->next=second;
    second->data=34;
    second->next=NULL;
    //cout<<second->data<<endl;
    print();

}
