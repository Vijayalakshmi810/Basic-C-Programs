//If sum of factors is equal to the number itself, It is perfect number

#include <stdio.h>

int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
   for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
        printf("Perfect Number");
    else
    printf("Not Perfect Number");

    return 0;
}

