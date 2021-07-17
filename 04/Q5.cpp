#include<stdio.h>
void f(int n,int m)
{
	static int a=0;
	int i,j,k;
	printf("%d ",a);
	for(i=0;i<n-1;i++)
	{
		if(a==0)
		{
			a++;
			for(k=0;k<2;k++)
			{
				printf("%d ",a);
			}
		}
		if(a==1)
		{
			a--;
			printf("%d ",a);
		}
		
	}
	
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	f(n,k);	
}
