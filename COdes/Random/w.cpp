#include<stdio.h>
#include<string.h>
#include<iostream>
int soundex(char number)
{
    char array0[]="CSKGJQXZ";
    char array1[]="AEIOUYWH";
    char array2[]="BPFV";
    if(strchr(array1,number))
        return 0;
    else if(strchr(array2,number))
        return 1;
    else if(strchr(array0,number))
        return 2;
    else if(number =='D'||number =='T')
        return 3;
    else if(number=='L')
        return 4;
    else if(number=='M' || number=='N')
        return 5;
    else if(number=='R')
        return 6;

}

int main()
{
    printf ("         NAME                     SOUNDEX CODE\n");




char s[25];

        while(gets(s)){
 char out[25];
        int firstnum,current;
        firstnum=soundex(s[0]);
        out[0]=s[0];
        int j=1;
        int l=strlen(s);
        for(int i=1; i<l; i++)
        {
            current = soundex(s[i]);
            if(current!=firstnum && current!=0)
            {
                out[j++]=current+'0';
            }
            if(current!=firstnum)
                firstnum=current;

        }
        printf("         %s",s);
        for ( int i = 0; i < 25 - l; i++ ) printf (" ");
        printf ("%c%c%c%c\n", out [0], out [1],
                out [2], out [3]);
        }
     printf ("                   END OF OUTPUT\n");
}
