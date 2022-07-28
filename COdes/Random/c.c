#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;

};
struct Node* H;

void create(int value)
{
    struct Node* T=(struct Node*)malloc(sizeof(struct Node));
    T->data=value;
    T->next=NULL;
    if(H==NULL)
    {
        H=T;
    }
    else
    {
        struct Node* i;
        i=H;
        while(i->next!=NULL)
        {
            i=i->next;
        }
        i->next=T;
    }
}
void display()
{
        struct  Node* P=H;

    while(P!=NULL)
    {
        printf("%d\n",P->data);
        P=P->next;

    }
}
void deletethis()
{
    printf("Enter the position to be deleted\n");
    int pos;
    scanf("%d",&pos);
    if(pos==1)
    {
        struct Node* temporary;
        temporary=H;
        H=H->next;
        free(temporary);
    }
    else
    {
        struct Node* i;
        i=H;
        int j;
        for (j=1;j<=pos-2 ; j++)
        {
            i=i->next;

        }
        struct Node* temp2;
        temp2=i->next;
        i->next=temp2->next;
        //free(temp);
    }
}
void insertit()
{
    printf("Enter the value to be inserted:\n");


    int value;
    scanf("%d",&value);
     struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
      temp->data=value;
    if(H==NULL || temp->data < H->data)
    {

        temp->next=H;
        H=temp;
    }
    else
    {
        struct Node* pred=H;
        struct Node* p=pred->next;
          while(p!=NULL && temp->data > p->data)
        {
            pred=p;
            //cout<<P->data<<" in" << endl;
            p=p->next;

        }
        pred->next=temp;
        temp->next=p;
    }

}
int main()
{
    printf("Initially the list is not empty and the current  value of the nodes are\n");
    H=NULL;
    create(5);
    create(18);
    create(34);
    create(54);
    display();
    int choice;
    while(1)
{
    printf("Number to choose:");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insertit();
            break;
    case 2:
        deletethis();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);

    }
}
}
