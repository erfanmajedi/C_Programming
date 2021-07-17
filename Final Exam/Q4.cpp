#include<stdio.h>
#include<stdlib.h>
int func(int *a,int *b,int *r)
{
	int a_size=sizeof(a)/sizeof(int);
	int b_size=sizeof(b)/sizeof(int);
	int r_size=0;
	for(int i=0;i<b_size;i++)
	{
		r[r_size++]=a[i];
	}
	for(int i=0;i<a_size;i++)
	{
		int flag=0;
		for(int j=0;j<b_size;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			r[r_size++]=a[i];
		}
	}
	return r_size;
}
int main()
{
	int a[]={1,2,3};
	int b[]={5,6,7};
	int r[2];
	printf("%d",func(a,b,r));
}

