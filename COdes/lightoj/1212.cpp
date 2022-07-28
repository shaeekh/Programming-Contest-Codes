#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        list<int> lis;
        int n,m;
        cin>>n>>m;
  //int count=0;

        for (int j=1;j<=m;j++)
        {



            string s;
            //int d;
           cin>>s;
           if(s[1]=='u')
           {
               int d;
               cin>>d;
               if(lis.size()==n)
            {
                //count=0;

                printf("The queue is full\n");
            }
            else
            {



            //cout<<s[1];

                if(s[4]=='L')
                {
                    //count++;
                    //if(count<=n)
                    lis.push_front(d);
                    printf("Pushed in left: %d\n",d);
                    //count++;


                }
                else if (s[4]=='R' )
                {
                    //count++;
                    //if(count<=n)
                    //{
                        lis.push_back(d);
                        printf("Pushed in right: %d\n",d);
                        //count++;
                    //print korte hobe
                //}
            }
            }
           }
            else if(s[1]=='o')

            {
                if(lis.empty())
                printf("The queue is empty\n");
            else
            {


                if(s[3]=='L')
                {
                     printf("Popped from left: %d\n",lis.front());
                    lis.pop_front();

//                    count--;
                }
                else if(s[3]=='R')
                    {
                          printf("Popped from right: %d\n",lis.back());
                        lis.pop_back();
                        //print

  //                      count--;
                  }
            }

        }
        //cout<<"list front"<<lis.front()<<endl;
        //cout<<"lis back"<<lis.back()<<endl;


    }
}
}


