#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j = 0, i = 0, *p1, **p2, **p3;
p2 = p3 = (int **)calloc(3, sizeof(int *));
for(i = 0; i < 3; i++){
    j = 2*i + 1;
    *p2 = (int *)malloc(j * sizeof(int));
    **p2 = j;
    p1 = *p2;
    while(j > 1){
        p1++;
        *p1 = j + *(p1 - 1);
        j--;
        printf("%d",p1);
    }
    p2++;
}
for(i = 2; i >= 0; i--)
    for(j = 0; j < 2 * i + 1; j++)
        printf("[%d][%d] = %d\n", i, j, *((*(p3 + i))+j));
}


