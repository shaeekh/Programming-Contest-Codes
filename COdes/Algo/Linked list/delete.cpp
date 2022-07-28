#include <stdio.h>

int  main()
{
    int num, temp, remainder, reverse = 0;

    printf("Enter an integer \n");
    scanf("%d", &num);

    temp = num;
    for (;num>0 ; )
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Its reverse is  = %d\n", reverse);
    if (temp == reverse)
        printf("Equal number  \n");
    else
        printf("No,they are not equal\n");
}
