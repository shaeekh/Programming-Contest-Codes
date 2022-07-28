/*Doubly Linked List*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* f;
    struct Node* b;
};
struct Node* head = NULL;

void insert(int value)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode -> data=value;
    if(head == NULL || head -> data > newNode -> data){
        newNode -> f= head;
        newNode -> b= NULL;
        if(head != NULL)
            head -> b= newNode;
        head = newNode;
    }

    else{
        struct Node* pred = head;
        struct Node* temp = head -> f;
        while(temp != NULL && newNode -> data > temp -> data)
        {
            pred = temp;


            temp = temp -> f;
        }
        newNode ->f=pred->f;
        newNode ->b= pred;
        pred ->f= newNode;
        if(temp != NULL)
            temp->b=newNode;
    }
}

void deleteit(int node)
{
    if(node == 1)
    {
        head = head->f;
        head->b=NULL;
    }
    else
    {
        int i;
        struct Node* temp = head;
        for(i = 1; i < node -1; i++){
            temp=temp->f;
        }
        temp->f= temp->f->f;
        temp->f->f->b=temp;
    }
}

void display()
{
    if (head==NULL)

        printf("Empty list\n");

    struct Node* temp = head;

    printf("Current Elements are-\n");
    while(temp != NULL)
    {
        printf("%d\n", temp -> data);
        temp =temp->f;
    }
    printf("\n");
}

int main()
{
    int ch,element;
    bool flag=true;

    while(flag){
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Choose one of the mentioned number to operate\n");
        scanf("%d", &ch);
        cout<<endl<<endl;
        switch(ch){
        case 1:
            printf("Enter the number you want to insert\n");
            scanf("%d", &element);
            insert(element);
            break;

        case 2:
            printf("Enter the position to delete\n");
            scanf("%d", &element);
            deleteit(element);
            break;

        case 3:
            display();
            break;

        case 4:
            flag=false;
            break;
        }
    }

}
