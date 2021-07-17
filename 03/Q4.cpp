#include<stdio.h>
int convert(int number,int base)
{
    if(number == 0 || base==10)
        return number;
    return (number % base) + 10*convert(number/base,base);
}
int main() 
{
	int num,x,i,New_num,count=0,j;
	scanf("%d",&num);
   New_num=convert(num,7);
   while(New_num!=0)
   {
   		New_num/=10;
   		count++;
   }
   int digit[count];
   New_num=convert(num,7);
   for(i=0;i<count;i++)
   {
   		x=New_num%10;
   		digit[i]=x;
   		New_num/=10;
   }
	for(j=count;j>0;j--)
	{
		x=New_num%10;
		New_num/=10;
		digit[j]=x;
	}
	if(digit[i]=digit[j])
		printf("True");
	else
		printf("False");
	
   		
   
   
   
   
   
}
