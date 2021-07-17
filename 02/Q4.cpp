#include<stdio.h>
int main()
{
	unsigned int x,y,a,b;
	int counter=0;
	scanf("%d%d%d%d",&x,&y,&a,&b);
	while(x!=y)
	{
		x+=a;
		y+=b;
		counter++;
		if(x==y)
			printf("They met in %d after %d jumps and lived happily ever after :)",x,counter);
	}

	
}
