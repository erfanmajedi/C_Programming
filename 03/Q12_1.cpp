#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int isDivisible(long long int n) 
{ 
    long long int temp = n; 
  
    
    while (n) 
	{ 
        int k = n % 10; 
        if (temp % k != 0) 
        {
        	return temp;  
		}
		n/=10;	 
    } 
}
int main()
{
	int n,digit,x;
	int i,j,k,y;
	scanf("%d",&n);
	int num[n];
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		for(j=2;j<=9;j++)
		{
			x=rand()%7;
			num[i]=x;
		}
		digit=num[i];
		if(digit>=2)
		{
			
			isDivisible(digit);
			printf("%d",isDivisible(digit));
		}
		else
		printf("'no corona'");
	}

	
}
