#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int flag=1;
    int a,b;
    int bingo=0;
    int t1=4230;
    //int t2=0;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {

        scanf("%d %d",&a,&b);
        if(a!=b)
        {
            //flag=4;
            bingo=1;
           // break;
          //  printf("rated\n");
            //return 0;
        }

        else
        {
            if (t1>=a)

            {t1=a;
            continue;
            }
           else if (a>t1)

            {
                flag=3;
               // break;
            //    printf("unrated\n");
           // return 0;
            }


        }

        }
        if (flag==1)
        {
            printf("maybe\n");
            //return 0;
        }
         if (bingo==1)
        {
            printf("rated\n");
            //return 0;
        }
         if (flag==3 && bingo==0)
        {
            printf("unrated\n");
            //return 0;
        }



    }

