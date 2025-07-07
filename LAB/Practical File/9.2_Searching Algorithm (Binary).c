// Search a Number from Array (Binary).
// Harsh Vedpathak_8026.

#include <stdio.h>
int binarysearch(int arr[],int size,int find);

int main()
{
    int a[10]={3,5,7,9,12,13,15,16,18,20};
    int key,index;
    printf("Enter Element to find : ");
    scanf("%d",&key);
    index=binarysearch(a,10,key);
    if(index==-1)
    {
        printf("%d not found.",key);
    }
    else 
    {
        printf("The Element %d is at index %d",key,index);
    }
    return 0;
}

int binarysearch(int arr[],int size, int find)
{
    int low=0,high=size-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if (arr [mid]==find)
        return mid;
        
        else if(arr[mid]<find)
        low=mid+1;
        
        else
        high=mid-1;
    }
    return -1;
}
