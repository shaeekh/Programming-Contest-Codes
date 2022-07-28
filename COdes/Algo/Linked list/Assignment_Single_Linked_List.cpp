/*Singly_linked_list
by Shaeekh Al Jahan,ID:16-01-04-077*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

};
struct Node* head;
void create(int value)
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
void display()
{
    struct  Node* p=head;

    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;

    }
}

void deleteIT ()
{
      printf("Enter the position to delete\n");
    int position;
    cin>>position;
    if(position==1)
    {
        struct Node* temporary;
        temporary=head;
        head=head->next;
        free(temporary);
    }
    else
    {
        struct Node* m;
        m=head;
        for (int i=1;i<=position-2 ; i++)
        {
            m=m->next;

        }
        struct Node* temp2;
        temp2=m->next;
        m->next=temp2->next;
        //free(temp);
    }
}
void insert()
{
    printf("Enter the value\n");


    int value;
    cin>>value;

     struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
      temp->data=value;
    if(head==NULL || temp->data < head->data)
    {

   //     temp->next=head;
     //   head=temp;
    }
    else
    {
        struct Node* pred=head;
        struct Node* P=pred->next;
          while(P!=NULL && temp->data > P->data)
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
    printf("Initially the list is not empty and the current  value of the nodes are\n");
    head=NULL;
    create(5);
    create(18);
    create(34);
    create(54);
    display();
    int ch;
    while(1)
{
    cout<<"Press the number to choose\n"<<endl;
    cout << "\n 1.Insert Node \n 2.Delete Node \n 3.Display List\n 4.Exit" <<endl;
    cin >> ch;
    printf("\n\n");

    switch(ch)
    {
    case 1:
        insert();
            break;
    case 2:
        deleteIT();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);

    }
}


}
