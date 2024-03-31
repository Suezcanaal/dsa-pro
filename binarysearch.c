#include <stdio.h>
#include <stdlib.h>
/*
int binSearch ( int arr[], int low , int high , int key)
{
    if(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]==key)
        return mid;

        if(arr[mid]>key)
            return binSearch(arr,low,mid-1,key);

            return binSearch(arr, mid+1,high,key);


    }
    return -1;
}
int main()
{
    int arr[50],i,n,key;
    printf("Enter the size of array = ");
    scanf("%d",&n);

    printf("Enter the elements of the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element need to be searched = ");
    scanf("%d",&key);

    int result=binSearch(arr,0,n-1,key);
    if (result != -1) {
        printf("Element is present at index %d.\n", result+1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;;
}
*/

int main()
{
    int arr[23];
    int n,key;
    printf("Enter the number of array elements\n");
     scanf("%d",&n);
     printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    printf("Enter the key need to be searched \n");
    scanf("%d",&key);

    int result = bst(arr,0,n,key);

    if(result == -1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Found on %d",result+1);
    }
  return 0;
}


int bst(int arr[],int low, int high,int key)
{
    int mid;
    mid = (low + high)/2;

    if(arr[mid]==key)
        return mid;
    else if(arr[mid]>key)
        return bst(arr,low,mid-1,key);
    return bst(arr,mid+1,high,key);
return -1;
}
