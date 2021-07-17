#include<stdio.h> 
void findLargest(int m, int s) 
{  
    if (s == 0) 
    { 
        (m == 1)? printf("The largest num is 0") : printf("Not Possible"); 
        return ; 
    } 
    if (s > 9*m) 
    { 
       printf("Not Possible");
        return ; 
    } 
    int res[m]; 
    for (int i=0; i<m; i++) 
    { 
        if (s >= 9) 
        { 
            res[i] = 9; 
            s -= 9; 
        } 
        else
        { 
            res[i] = s; 
            s = 0; 
        } 
    }  
    for (int i=0; i<m; i++) 
        printf("%d",res[i]); 
} 
int main() 
{ 
    int b,c;
	scanf("%d%d",&b,&c); 
    findLargest(b,c); 
} 
