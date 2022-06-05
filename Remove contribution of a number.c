#include <stdio.h>

int main()
{
    int inp,contri_val,res;
    scanf("%d",&inp);
     scanf("%d",&contri_val);
        if(inp%contri_val==0)                              //check for contrival is a factor
        res=inp/contri_val;                               //remove contribution from number
           printf("%d ",res);
    
    return 0;
}

//NOTE: To remove all contributions of the number instead of  res=input/contri_val;    use input=input/contri_val
