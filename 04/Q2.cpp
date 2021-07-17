#include<stdio.h>
int success(int n)
{
	if(n==0 || n==1)
		return 1;
	return success(n-1)+success(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	success(n);
	printf("%d",success(n));
}
