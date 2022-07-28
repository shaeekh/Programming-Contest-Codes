#include<bits/stdc++.h>
using namespace std;

//}
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insertit(int p)
{
 struct Node* temp=   (struct Node*)malloc(sizeof(struct Node));
 temp->data=p;
 //temp->next=NULL;
 temp->next=head;
 head=temp;
}
void print()
 {
    struct Node*p;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }

}

int main()
{
    head=NULL;
    insertit(1);//1
    insertit(3);//3 1
    insertit(4);//4 3 1
    print();

}
