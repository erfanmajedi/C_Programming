#include<stdio.h>
int Min(int i,int j,int k)
{
	if(i<j && i<k)
	return i;
	if(j<i && j<k)
	return j;
	if(k<i && k<j)
	return k;
}
int main()
{
	int lemon,apple,pear,i=0,j=0,k=0,x,y,z;
	scanf("%d%d%d",&lemon,&apple,&pear);
	x=lemon;
	y=apple;
	z=pear;
	while(lemon>=1)
	{
		lemon-=1;
		i++;
	}
	while(apple>=2)
	{
		apple-=2;
		j++;
	}
	while(pear>=4)
	{
		pear-=4;
		k++;
	}
	printf("COMPOTE: %d\n",Min(i,j,k));
	x=x-(1*Min(i,j,k));
	y=y-(2*Min(i,j,k));
	z=z-(4*Min(i,j,k));
	printf("EXTRA-LEMON: %d\n",x);
	printf("EXTRA-APPLE: %d\n",y);
	printf("EXTRA-PEAR: %d\n",z);
	if(Min(i,j,k)==0)
	printf("Zero Compote");
	
		
	
	
	
}
	
	
