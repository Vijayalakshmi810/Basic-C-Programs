#include <stdio.h>

int main()
{
    int n,sum=0,digit;
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;            //Sum of digits of a number
        n=n/10;
    }
    printf("Sum of digits is %d",sum);

    return 0;
}
