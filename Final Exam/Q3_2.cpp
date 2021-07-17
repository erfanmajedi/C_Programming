#include<stdio.h>
#include<stdlib.h>
int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int majority_element(int *nums,int size)
{
	int i,j,counter=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(nums[i]==nums[j])
				counter++;
			if(counter>size/2)
				return nums[i];
		}
	}
	
}
int main()
{
	int nums[]={3,2,3};
	qsort(nums,3,sizeof(int),comparetor);
	printf("%d",majority_element(nums,3));
	
}
