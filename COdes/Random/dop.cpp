#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for (int i=1;i<=t;i++)
    {
      //  bool fg=false;
        //bool fg2=true;
        //bool fg3=false;

        int n;
        cin>>n;
        if(n>=7)
        {


        int a=n%7;

        if(a==0)
            {
                printf("YES\n");
                //return 0;
          //      fg=true;
                 continue;
            }
        else if(a%3==0)
        {


        printf("YES\n");

        //return 0;
        //fg=true;
         continue;
        }
        }
        //if(fg==true)
        //{
          //  fg2=false;

        //}

        if(n>=3  )
        {
            int b=n%3;
            if(b==0)
                {
                    printf("YES\n");
                  //  return 0;
            //      fg3=true;
                   continue;

                }
            else if(b%7==0)
            {
                printf("YES\n");
                //return 0;
              //  fg3=true;
                continue;

            }

        }
        //if(fg==false || fg3==false)
        //{
            printf("NO\n");
          //  printf("%d %d\n",fg,fg3);
    //}

}
}
