#include<stdio.h>
int main()
{
	int a,b,r,q;
	float c,m,X,Z;
	scanf("%d%d%f%d%f%d",&a,&b,&c,&r,&m,&q);
	if(c!=0 && (q+r)!=0 && m!=0 && ((a+b)*(1/m))!=0 && a!=0)
	{
		Z=(8.8*(a+b)*2/c-0.5+2*a/(q+r))/((a+b)*(1/m));
		X=(-1*b+(b*b)+2.4*a*c)/(2*a);
		printf("Result for ""\"Z""\" is %.2f\n",Z);
		printf("Result for ""\"X""\"  is %.3f",X);
	}
	
}
