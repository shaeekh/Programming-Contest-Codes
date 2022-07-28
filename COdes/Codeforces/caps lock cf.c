#include <stdio.h>
#include <string.h>
int main()
{
    char s1[105];
    scanf("%s", s1);
    int i;
    for (i=0;i<strlen(s1);i++)
    {
        if (i!=0)
        {
            if(s1[i]>=65 && s1[i]<=90)
            {
                s1[i]=s1[i]+32;
            }
        }
        if (i==0)
        {
            if (s1[i]>90)
            {
                s1[i]=s1[i]-32;
            }
        }

    }
    printf("%s\n",s1);
    return 0;
}
