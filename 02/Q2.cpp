#include<stdio.h>
int main()
{
	int num,m;
	scanf("%5d",&num);
	int digit[6],i;
	for(i=0;i<5;i++)
	{
		m=num%10;
		num=num/10;
		digit[i]=m;
		digit[i]++;
	}
	for(i=0;i<5;i++)
	{
		while(digit[i]==10)
		{
			digit[i]=0;
			digit[i+1]++;	
		}	
		printf("%d",digit[i]);
	}
	
	
}
