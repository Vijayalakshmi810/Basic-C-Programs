/*Output:
 1  3  5  7 
 2  4  6  8 
 9 11 13 15 
10 12 14 16   */


#include <stdio.h>

int main()
{
    int even_data,odd_data,line,ctr,inp;
    scanf("%d",&inp);
    odd_data=1;
    even_data=2;
    for(line=1;line<=inp;line++)
    {
    printf("\n");
    for(ctr=1;ctr<=inp;ctr++)
    {
        if(line%2==1)
        {
        printf("%2d ",odd_data);
        odd_data=odd_data+2;
        }
        else
        {
        printf("%2d ",even_data);
        even_data=even_data+2;
        }
    }
    }

    return 0;
}
