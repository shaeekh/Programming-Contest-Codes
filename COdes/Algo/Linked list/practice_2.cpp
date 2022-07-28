
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void print(Node* head )
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);

        head=head->next;
    }

}
int main()
{
    head=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second;
    second=(struct Node*)malloc(sizeof(struct Node));
    head->next=second;
    second->data=4;
    head->data=34;
    second->next=NULL;
    print(head);

}
