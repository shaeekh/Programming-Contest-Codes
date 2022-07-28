#include <stdio.h>
int sort(int ar[],int n)
{
    int i,j,swap;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {


            if (ar[j]>ar[j+1])
        {
            swap=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=swap;
        }
    }
    }
        {

        }
    }
    int main()
    {


    int n=4;
    int i,count=0;
    int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }
    sort(ar,n);
    for (i=0;i<n;i++)
    {
    if (ar[i]==ar[i+1])
    {
        count++;

        printf("gul\n");
    }

    }

    printf("%d\n", count);

    return 0;


}
