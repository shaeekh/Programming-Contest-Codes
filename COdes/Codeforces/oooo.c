#include<stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        char str[100],ch;
        gets(str);
        int ma=0;
        for(int k=97; k<=122; k++)

        {
            int sum=0;
            for(int j=0; j<strlen(str); j++)
            {

                if(str[j]==k)
                    sum++;
                if(ma<sum)
                {
                    ma=sum;
                    ch=k;
                }
            }

        }
        printf("%d %c\n",ma,ch);
    }
}
