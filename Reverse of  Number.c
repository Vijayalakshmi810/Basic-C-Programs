#include <stdio.h>

int main()
{
    int n,rev=0,digit,place=1;
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;                             //Reverse of a number
        n=n/10;
    }
    printf("%d",rev);

    return 0;
}
