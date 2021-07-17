#include<stdio.h>
int printDivisors(int n) 
{ 
    for (int i=1;i<=n;i++) 
        if (n%i==0) 
        	return i;
} 

