#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,x=0,y=0;
	char move;
	if(n%2==0)
	{
		i=0;
		while(i<n)
		{
			scanf("%c",&move);
			printf("%c",move);
			printf("\n");
			i++;
		}
		printf("YES");
	}
	else
	{
		i=0;
		while(i<n)
		{
			scanf("%c",&move);
			printf("%c",move);
			printf("\n");
			i++;
			if(move=='U' || move=='D')
			{
				x++;
			}
			else if(move=='R' || move=='L')
			{
				y++;
			}
		}
		printf("y axis and x axis distances are : %d %d",y,x);
	}

}
