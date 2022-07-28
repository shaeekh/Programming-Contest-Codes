#include <stdio.h>
#include <math.h>
int recurse(int r,int n)
{
    int a=pow(r,n)*recurse(r,n-1);
    return a;
    if (n==0)
    {
        return r;
    }



}
int main()
{

    int r,n;
    scanf("%d %d", &r, &n);
    int b=recurse(r,n);
    printf("%d\n",b);

}
