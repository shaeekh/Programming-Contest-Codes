#include<bits/stdc++.h>
using namespace std;
 string s;
bool ispal()
{

    int l = 0;
    int h = s.size() - 1;


    while (h > l)
    {
        if (s[l++] != s[h--])
        {
           //printf("%s is Not Palindrome", str);
           //cout<<s[l]<<" "<<s[h]<<endl;
            return false;
        }
    }
    //printf("%s is palindrome", str);
    return true;
}
int main()
{

    cin>>s;
    bool eq=true;
    if(!ispal())
    {
      //  cout<<"ei ";
        cout<<s.size()<<endl;

    }
    else
    {


    for (int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
        {
            eq=false;

        }

    }
    if(eq)
        cout<<"0"<<endl;
    else

    cout<<s.size()-1<<endl;

}
}
