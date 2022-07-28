#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> chars;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch==' ' || ch=='\n')
        {
            while(chars.size()!=0)
            {
                printf("%c",chars.top());
                chars.pop();
            }
            printf("%c",ch);


        }
        else
        {
            chars.push(ch);
        }
    }
return 0;
}
