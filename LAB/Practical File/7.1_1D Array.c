// 7.1 To store and Print 1D array.
// Harsh Vedpathak_8026.

#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
