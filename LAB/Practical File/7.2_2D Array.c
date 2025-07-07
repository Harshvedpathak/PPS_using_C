// 7.2 Matrix Addition of (3 X 3), Take Values from User
// Harsh Vedpathak_8026

#include <stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("Enter the Elements of 1st Matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter the value at %d X %d :",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     printf("\nEnter the Elements of 2nd Matrix \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter the value at %d X %d :",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
     printf("\nThe Addition of 1st and 2nd matrix is : \n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
            printf(" %d ",c[i][ j ]);
        }
        printf("\n");
    }
    return 0;
}
