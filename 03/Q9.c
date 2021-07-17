#include<stdio.h>
int main()
{
	int a,b,i,j,x,k,m,n;
	scanf("%d%d",&a,&b);
	if(a%2==0 && b%2==0 || a%2!=0 && b%2!=0)
	{
		x=(a-b)/2;
		for(i=0;i<x;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
		for(i=0;i<b;i++)
		{
			for(j=0;j<x;j++)
			{
				printf("* ");
			
			}
			for(k=0;k<b;k++)
			{
				{
					printf("  ");
				}
			}
			for(m=0;m<1;m++)
			{
				for(n=0;n<x;n++)
					printf("* ");
			}
			printf("\n");
		}	
		for(i=0;i<x;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
	}
	else printf("Not Possible");
}

