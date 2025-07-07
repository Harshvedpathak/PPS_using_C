// Search a Number from Array (linear).
// Harsh Vedpathak_8026.

#include <stdio.h>
int main()
{
    int a[7] = {1,2,3,4,5,6,7},index=0,i;
    for(i=0;i<8;i++)
    {
        if(a[i]==4)
        {
            printf("The Number is Present at %d position",i);
            index=1;
        }
    }
    if (index==0)
    {
        printf("4 not found in the given Array.");
    }

    return 0;
}
