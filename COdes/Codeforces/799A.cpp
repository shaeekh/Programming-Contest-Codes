#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,t,k,d;
    cin>>n>>t>>k>>d;
    int T1;
//    if (k>n)
  //    printf("NO\n");


    //else
    //{
        r=n/k;

        T1=t*r;
    //}
    int T2;
     int element=0;
     for (int i=t; ; i=i*r)
     {
         if (element>=n)
         {
          T2=i;

            break;
         }
         if(i>=d)
            {
                i=abs(t-(t-d));


                element=element+k+k;
           printf("%d minute e %d shongkhok cake kintu 2 ta ekshathe\n",i,element);
            }

         else
         {element=element+k;

             printf("%d minute e %d shongkhok cake\n",i,element );
         }

     }
    // printf("ditio tar time %d\n",T2);
     if(T2>=T1)
        printf("NO\n");
     else
        printf("YES\n");

    }

