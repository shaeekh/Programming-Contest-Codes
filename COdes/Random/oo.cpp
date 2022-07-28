#include<bits/stdc++.h>
using namespace std;
char s[105];
int i=0,c='a',z=0;
int main(){
    scanf("%s",s);
    cout<<c<<endl;
    for(;s[i];c=s[i++]){

            cout<<c<<endl;
        c=abs(c-s[i]);
        z+=min(c,26-c);
    }
    printf("%d",z);
}
