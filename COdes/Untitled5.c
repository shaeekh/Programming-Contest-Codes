
#include<stdio.h>

int a[2000], n, f, l;

void quickSort(int f, int l)
{
    int i, j, k, temp, temp1;

    if(f < l)
    {
        i = f + 1;
        while(a[i] < a[f])
            i = i + 1;
        j = l;
        while(a[j] > a[f])
            j = j - 1;
        while(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            while(a[i] < a[f])
                i = i + 1;
            while(a[j] > a[f])
                j = j - 1;

        }
        temp1 = a[f];
        a[f] = a[j];
        a[j] = temp1;

        quickSort(f, j-1);
        quickSort(j+1, l);
    }

}

int main()
{
    int i;

    scanf("%d",&n);

    printf("\nEnter elements:");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Unsorted array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    quickSort(0, n-1);

    printf("\nSorted array:\n");

    for(i = 0; i < n; i++)
        printf("%d ",a[i]);

    return 0;


}
//quick sort.c
//Open with Google Docs
//Displaying quick sort.c.
