#include<bits/stdc++.h>
using namespace std;

int main()
{
    string given="noakhalibivagchai";

    string s;
    cin>>s;
    int count=0;
    //stack<char> collection;
   // string temp="boakhalibivagchai";
   // int j=0;
    int flag=0;
    for (int i=0,j=0;i<s.size();i++)
    {
         if(count==given.size())
   {
       flag=1;
        printf("YES\n");
        break;
   }

        if (s[i]==given[j])
            {
                //printf("given[j] holo  %c and  ase given er  %d index e\n",given[j],j);
                //printf("s[i] holo %c and ases er  %d index e\n",s[i],i);
            //flag=0;


              count++;
                //printf("temp[j] holo %c and ase temp er  %d index e\n",temp[j],j);

                j++;
            }
            //}
            //else
              // continue;
    }
   printf("count is %d and size of given %d\n",count,given.size());
   if(count==given.size())
   {
       printf("YES\n");
   }



    {
      // cout<<temp<<endl;
        printf("NO\n");
}
}
