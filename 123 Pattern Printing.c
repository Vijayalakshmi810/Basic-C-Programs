/*Input: number of lines. eg. 4
Output: 
1 
2 3 
4 5 6 
7 8 9 10 */




#include <stdio.h>

int main()
{
    int data,line,ctr,inp;
    scanf("%d",&inp);
    data=1;
    for(line=1;line<=inp;line++)
    {
    printf("\n");
    for(ctr=1;ctr<=line;ctr++)
    printf("%d ",data++);
    }

    return 0;
}


