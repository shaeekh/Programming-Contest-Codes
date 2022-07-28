#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for (int k=1;k<=t;k++)
    {
        int countsnake=0;
        int count2=0;


  string s1;
  cin>>s1;
  //cin.ignore();
  int l=s1.size();

  for (int  i=0;i<l;i++)
  {
      if (s1[i]=='s')
        countsnake++;
  }
   //int l=strlen(s1);
  //cout<<countsnake<<endl;
  for (int i=0;i<=l-2;i++)
    {
        //if (i==0)
      // s1[i]=='s' && s1[i+1]=='m')
        //        count2++;
        //}
       cout<< s1[i]<< "  "<<s1[i-1]<<endl;
    if (s1[i]=='m' &&(s1[i-1]=='s' || s1[i+1]=='s' ))
            count2++;

    }
    cout<<"mot snake is  "<<countsnake<<endl;
    cout<<"eaten snake is  "<< count2<<endl;
    int rem_snake=countsnake-count2;

    if(rem_snake>count2)
        printf("snakes\n");
    else if (rem_snake==count2)
        printf("tie\n");
        else
        cout<<"mongooses"<<endl;
}

  }

