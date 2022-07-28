#include<stdio.h>
#include<stdlib.h>
int n=30;
void mergesort(int ar[],int first,int last);
void Merge(int ar[],int p,int q,int r);
int main()
{   int i,f,l;
    int ar1[n];
    for(i=0;i<n;i++)
      ar1[i]=rand()%200;
         for(i=0;i<n;i++)
           printf("%d\t",ar1[i]);
       printf("\nEnter the first and the last index of the array that needs to be sorted:\n");
       scanf("%d%d",&f,&l);

        mergesort(ar1,f,l);
        for(i=0;i<n;i++)
            printf("%d\t",ar1[i]);

         return 0;
}
void mergesort(int ar[],int first,int last)
{   int d;
    if(first<last)
    {
    d=(first+last)/2;
    mergesort(ar,first,d);
    mergesort(ar,d+1,last);
    Merge(ar,first,d,last);
    }


}
void Merge(int ar[],int p,int q,int r)
{

int n1=q-p+1,n2=r-q,i,j,k;
int L[n1],R[n2];
for(i=0;i<n1;i++)
    L[i]=ar[p+i];
for(j=0;j<n2;j++)
    R[j]=ar[q+j+1];
L[n1]=2147483647;
R[n2]=2147483647;
i=0;
j=0;
for(k=p;k<=r;k++)
{
    if(L[i]<=R[j])
    {
        ar[k]=L[i];
        i++;
    }
    else
    {
        ar[k]=R[j];
        j++;
    }
}


}
