

/* Input: 10 7 3 6 12 8 5
Required output: The maximum element is 12
 The minimum element is 3
 10  7  12  6  3  8  5  */

#include <stdio.h>

int main()
{
    int a[]={10,7,3,6,12,8,5};
    int i,e,max_ind,max;
    int min,min_ind,temp;
    max=a[0];
    min=a[0];
    e=sizeof(a)/sizeof(a[0]);   //To find size of array
    for(i=0;i<e;i++)
    {
        if(a[i]>max)          //To find maximum element in array
        {
        max=a[i];
        max_ind=i;
        }
        if(a[i]<min)           //To find minimum element in array
        {
            min=max=a[i];
            min_ind=i;
        }
    }
    temp=a[max_ind];
    a[max_ind]=a[min_ind];
    a[min_ind]=temp;
    printf("The maximum element is %d\n",max);
printf(" The minimum element is %d\n",min);
for(i=0;i<e;i++)
printf(" The swapped array is %d ",a[i]);
    return 0;
}
