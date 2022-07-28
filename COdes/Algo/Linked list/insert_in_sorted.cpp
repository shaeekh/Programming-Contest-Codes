#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void display(struct Node*p)
{
    //struct Node* p;
    //p=head;
    //oporer 2 ta line likhle parameter er dorkar nai
    while(p!=NULL)
    {
        cout<<"data gulo holo" <<p->data<<endl;
        p=p->next;
    }
}
void insert_end(int value)
{
    struct Node* T=(struct Node*)malloc(sizeof(struct Node));
    T->data=value;
    T->next=NULL;
    if(head==NULL)
    {
        head=T;
    }
    else
    {
        struct Node* m;
        m=head;
        while(m->next!=NULL)
        {
            m=m->next;
        }
        m->next=T;
    }

    }
void insertit(int value)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    if(head==NULL || temp->data<head->data)
    {
         //temp->next=NULL;
        temp->next=head;
        head=temp;
       // temp->next=head;
    }

    /*if(temp->data<head->data)
    {
        temp->next=head;
        head=temp;
    }
    */ // ei kaj ta alada kore korle ar oporer if e
    //or die add korar  dorkar nai.
    else
    {
        struct Node* pred=head;
        struct Node* P=pred->next;
        //pred=head;
        //P=pred->next;
        while(P!=NULL &&temp->data>P->data)
        {
            pred=P;
            //cout<<P->data<<" in" << endl;
            P=P->next;

        }
        pred->next=temp;
        temp->next=P;


    }
}
int main()
{
    head=NULL;
    insert_end(4);
    insert_end(10);
    insert_end(14);

   insertit(3);
    display(head);

}
