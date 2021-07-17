#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) 
	{ 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
  
int main() 
{ 
    int arr[1000000];
    int n = sizeof(arr) / sizeof(arr[0]); 
    int i,j,x;
   	for(i=0;i<1000000;i++)
   	{
   		arr[i]=i;
   		
	}
	printf("%d",arr[i]);
} 
