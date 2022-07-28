#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  s;
//    int d+;
   int count=0;
    while(getline(cin,s))
    {


        for (int i=0;i<s.size();i++)
        {
            if(s[i]=='"')
            {
                count++;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");

            }
            else
                cout<<s[i];

            }
            cout<<endl;

            }


    return 0;
}


