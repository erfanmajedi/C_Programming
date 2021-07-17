#include<stdio.h>
#include<math.h>
int digit(int a)
{
	int i,x;
	while(a)
	{
		x=a%10;
		i++;
		a/=10;
	}
	return i;
}
int convert(int number,int base)
{
    if(number == 0 || base==10)
        return number;
    return (number % base) + 10*convert(number/base,base);
}
void polinderome(int n)
{
	int reverse,x,temp;
	temp=n;
	while(temp)
	{
		x=temp%10;
		reverse=reverse*10+x;
		temp/=10;
	}
	if(reverse==n)
		printf("Yes");
	else
		printf("No");
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int i,count=0,sum=0,m;
	for(i=digit(a)-1;i>=0;i--)
	{
		m=a%10;
		a/=10;
		m*=pow(b,i);
		sum+=m;
	}
	polinderome(convert(sum,c));
}
	
