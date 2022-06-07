//If sum of digits is a factor of that number, it is a Harshad Number

#include <stdio.h>

int main()
{
    int n,sum=0,digit,i;
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;                             
        n=n/10;
    }
    if(n%sum==0)
    {
        printf("Harshad Number");
}
    else
    printf("Not Harshad Number");

    return 0;
}
