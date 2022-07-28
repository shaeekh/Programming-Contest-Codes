#include<bits/stdc++.h>
using namespace std;
int a[10];
int front=-1;
int rear=-1;
void insert()
{
    printf("number to push\n");
    int num;
    cin>>num;
    if(front==10-1)
        printf("bokachoda ki gase dhore?\n");
    else
    {
        if(front==-1)
            front=0;
        rear=rear+1;
        a[rear]=num;
    }
}
void deleteit()
{
    if (front==-1)
        printf("dhur\n");
    else
        front=front+1;


}
void display()
{
    if(front==-1)
        printf("faka\n");
    else
    {
        for (int i=front;i<=rear;i++)
            cout<<a[i]<<endl;
    }
}
int main()
{

    int ch;
    while(1)
    {
        printf ("\n1.Insert\n2.Delete\n3.display\n4.Exit\n");
    printf("Enter choice\n");
        cin>>ch;
        switch(ch)
        {
        case 1:
            insert();
            break;

        case 2:
            deleteit();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

    }
    }
}

