#include<stdio.h>
int main()
{
	int weight;
	double height,BMI;
	scanf("%d%lf",&weight,&height);
	BMI=weight/(height*height);
	printf("%0.2lf",BMI);
}
