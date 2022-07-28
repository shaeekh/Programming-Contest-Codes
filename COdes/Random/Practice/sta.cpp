#include<bits/stdc++.h>
using namespace std;
 int a[5];
    int t=-1;
    void push()
    {

        if(t==4)
            printf("Not possible\n");
            else
            {
                printf("de handa\n");
            int x;
            cin>>x;
        t=t+1;
        a[t]=x;
            }
    }
    void pop()
    {
        if(t==-1)
            printf("mara kha\n");
        t--;
    }
    void display()
    {
        if(t<=-1)
            printf("pagolchoda eita khali\n");
        else
            for (int i=t;i>=0;i--)
            cout<<a[i]<<" "<<endl;


    }
int main()
{
    int num;
    while(1)
    {
        printf("\nEnter your choice:\n");
        printf("\n 1.Push\n 2.Pop\n 3.display\n 4.Exit\n");

        scanf("%d",&num);
        if(num == 1)
            push();
        else if(num == 2)
            pop();
        else if(num == 3)
            display();
        else
            return 0;
    }


}
