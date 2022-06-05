#include <stdio.h>

int main()
{
    int inp,chk_factor;
    scanf("%d",&inp);
     for(chk_factor=2;chk_factor<=inp;chk_factor++)
     {
        if(inp%chk_factor==0)   
        {
             printf("%d ",chk_factor); 
             while(inp%chk_factor==0)                       //Prime numbers check
             inp=inp/chk_factor;
        }
     }
    
    return 0;
}

