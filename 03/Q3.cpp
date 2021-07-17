#include<stdio.h>
 int main()
 {
 	int x1,x2,x3;
 	scanf("%d%d%d",&x1,&x2,&x3);
 	int i;
	int sum1=0,sum2=0;
	int sum3=0,sum4=0;
	int sum5=0,sum6=0;
	int sum7=0,sum8=0;
	int sum9=0,sum10=0;
	int sum11=0,sum12=0;
 	if(x1>x2 && x1<x3 || x1<x2 && x1>x3 )
 	{
 		for(i=0;i<1;i++)
 		{
 			x2++;
 			x3--;
 			sum1=(x3-x2)+(x1-x2)+(x3-x1);
		}
		for(i=0;i<1;i++)
		{
			x2--;
			x3++;
			sum2=(x3-x2)+(x1-x2)+(x3-x1);
		}
		if(sum1<sum2)
			printf("%d",sum1);
		else
			printf("%d",sum2);	
	}
	else if(x2>x1 && x2<x3 || x2<x1 && x2>x3 )
 	{
 		for(i=0;i<1;i++)
 		{
 			x1++;
 			x3--;
 			sum3=(x3-x1)+(x2-x1)+(x3-x2);
		}
		for(i=0;i<1;i++)
		{
			x1--;
			x3++;
			sum4=(x3-x1)+(x2-x1)+(x3-x2);
		}
		if(sum3<sum4)
			printf("%d",sum3);
		else
			printf("%d",sum4);
	}
	else if(x3>x1 && x3<x2 || x3<x1 && x3>x2)
 	{
 		for(i=0;i<1;i++)
 		{
 			x1++;
 			x2--;
 			sum5=(x1-x2)+(x3-x2)+(x1-x3);
		}
		for(i=0;i<1;i++)
		{
			x1--;
			x2++;
			sum6=(x1-x2)+(x3-x2)+(x1-x3);
		}
		if(sum5<sum6)
			printf("%d",sum5);
		else 
			printf("%d",sum6);
	}
	else if(x1==x2 && x2==x3)
		printf("0");
	else if (x1==x2 && x1>x3)
	{
	
		sum7=(x1-x3)+(x2-x3);
		printf("%d",sum7);
	}
	else if(x1==x2 && x1<x3)
	{
		sum8=(x3-x1)+(x3-x2);
		printf("%d",sum8);
	}
	else if(x1==x3 && x1<x2)
	{
		sum9=(x2-x1)+(x2-x3);
		printf("%d",sum9);
	}
	else if(x1==x3 && x1>x2)
	{
		sum10=(x1-x2)+(x3-x2);
		printf("%d",sum10);
	}
	else if(x2==x3 && x2<x1)
	{
		sum11=(x1-x2)+(x1-x3);
		printf("%d",sum11);
	}
	else if(x1==x2 && x2>x1)
	{
		sum12=(x2-x1)+(x2-x3);
		printf("%d",sum12);
	}
 }
