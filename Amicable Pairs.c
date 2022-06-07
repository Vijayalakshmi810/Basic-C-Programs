//If sum of factors of num1 is equal to num2 and sum of factors of num2 is equal to num1 it is amicable pair. eg. 220 and 284

#include <stdio.h>

int main()
{
    int n1,n2,sum1=0,i,sum2=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
   for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        sum1=sum1+i;
    }
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        sum2=sum2+i;
    }
    if((sum1==n2)&&(sum2==n1))
        printf("Amicable Pair");
    else
    printf("Not Amicable Pair");

    return 0;
}
