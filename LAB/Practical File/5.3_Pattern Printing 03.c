// 5.3 Pattern Printing.

//           *
//        *     *
//     *     *     *
//        *     *
//           *

// Harsh Vedpathak_8026

#include <stdio.h>

int main() {
    int i, s, j;

    for(i = 1; i <= 3; i++)
    {
       for (s=1; s<=3-i ;s++)
       {
           printf("  ");
       }
        for(j = 1; j <=i; j++) 
        {
            printf("  * ");
        }
        printf("\n");
    }

    for(i = 2; i>=1; i--)
    {
        for (s=1; s<=3-i ;s++)
       {
           printf("  ");
       }
        for(j = 1; j<=i; j++) 
        {
            printf("  * ");
        }
        printf("\n");
    }
    return 0;
}
