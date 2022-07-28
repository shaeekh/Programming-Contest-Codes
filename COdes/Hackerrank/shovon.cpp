#include<stdio.h>
int main()
{
    long int a,b,c,Sum=0;
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a>=0&&b>=0&&c>=0){
       if(a>b&&a>c&&b<a&&b<c){
          Sum = a+b;
        printf("%ld\n",Sum);
       }
       if(a>b&&a>c&&c<a&&c<b){
            Sum = a+c;
        printf("%ld\n",Sum);
       }
       if(b>a&&b>c&&a<b&&a<c){
           Sum = b+a;
            printf("%ld\n",Sum);
       }
       if(b>a&&b>c&&c<a&&c<b){
            Sum = b+c;
        printf("%ld\n",Sum);
       }
       if(c>a&&c>b&&a<b&&a<c){
            Sum = c+a;
        printf("%ld\n",Sum);
       }
       if(c>a&&c>b&&b<a&&b<c){
            Sum = c+b;
        printf("%ld\n",Sum);
       }

    }
    return 0;

}
