#include<bits/stdc++.h>
using namespace std;
int a[3042];
int main()
{

    while(1)
    {
         int n;
    cin>>n;
        if(n==0)
            break;
        while(1)
        {
            for (int i=0;i<2042;i++)
                {
                    a[i]=0;
                }
            //int a[n];
            cin>>a[0];
            if(a[0]==0)
                break;
            for (int i=1;i<n;i++)
            {
                cin>>a[i];
            }
            stack<int> st;
          int fuck=0;
            for (int i=1;i<=n;i++)
            {
                st.push(i);
                	while(!st.empty() && st.top()==a[fuck])
                    {
                        st.pop();
                    fuck++;

                      if(fuck==n)
                        break;
                    }
            }
            if(st.empty())
                printf("Yes\n");
            else
            {
             //  cout<<st.top()<<endl;

                printf("No\n");
            }
        }
          cout<<endl;
    }
    return 0;

}

