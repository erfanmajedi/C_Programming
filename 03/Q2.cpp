#include<stdio.h>
int main()
{
	float num[3],average=0,sum=0;
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%f",&num[i]);
		sum+=num[i];
		average=sum/3;
		
	}
		int max=0,min=0;
	for(i=0;i<3;i++)
	{
		if(num[i]-average>0)
		max++;
		if(num[i]-average<0)
		min++;
	}
	if(min<max)
		printf("%d",max);
	else
		printf("%d",min);
	
	
}
