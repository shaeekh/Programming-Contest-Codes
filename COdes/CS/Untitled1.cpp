#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void){

    int i,j,n,length;

    char arr[109];

    scanf("%d", &n);

    for(i=1;i<=n;i++){

        scanf("%s", arr);

        for(j=0;arr[j]!='\0';++j){
            length = j;
//            cout<<j<<endl;
        }

        if(length <= 10){
            printf("%s\n", arr);
        }

        else {
            printf("%c%d%c\n", arr[0], (length-1), arr[length]);
        }

    }

}
