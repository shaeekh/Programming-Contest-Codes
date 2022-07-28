#include <cstdio>

using namespace std;
int arr[101];

int main() {
    int n,max=0,min=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]>arr[max]) max=i;
        if(arr[i]<=arr[min])min=i;
    }
    if(max>min)max-=1;

    printf("%d\n",(n-1-min)+max);
    return 0;
}
