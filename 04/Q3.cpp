#include<stdio.h>
void multiply(float F[][3],float G[][3],float mult[][3], float r1, float c1, float r2, float c2)
{
	for (int i = 0; i < r1; ++i) 
	{
		for (int j = 0; j < c2; ++j) 
		{
            mult[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; ++i) 
	{
        for (int j = 0; j < c2; ++j) 
		{
            for (int k = 0; k < c1; ++k) 
			{
                mult[i][j] += F[i][k] * G[k][j];
    
            }
        }
    }
}
void display(float mult[][3], int r1, int c2) 
{
    for (int i = 0; i < r1; ++i) 
	{
        for (int j = 0; j < c2; ++j)
		{
            printf("%.2f ", mult[i][j]);
    	}
    }
}
            
int main()
{
	int a11,a12,a13,a21,a22,a23,a31,a32,a33;
	int b11,b12,b13,b21,b22,b23,b31,b32,b33;
	int c11,c12,c13,c21,c22,c23,c31,c32,c33;
	scanf("%d%d%d%d%d%d%d%d%d",&a11,&a12,&a13,&a21,&a22,&a23,&a31,&a32,&a33);
	scanf("%d%d%d%d%d%d%d%d%d",&b11,&b12,&b13,&b21,&b22,&b23,&b31,&b32,&b33);
	scanf("%d%d%d%d%d%d%d%d%d",&c11,&c12,&c13,&c21,&c22,&c23,&c31,&c32,&c33);
	float determinant=0;
	determinant= determinant + ((a11*(a22*a33-a32*a23))-a12*(a21*a33-a23*a31)+a13*(a21*a32-a31*a22));
	float det_inv=0;
	det_inv=1/determinant;
	float B[3][3]={{b11,b12,b13},
	             {b21,b22,b23},
				 {b31,b32,b33}};
	float C[3][3]={{c11,c12,c13},
	             {c21,c22,c23},
				 {c31,c32,c33}};
	float mult[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			B[i][j]*=det_inv;
	    }
	}
	multiply(B,C,mult,3,3,3,3);
			 display(mult,3,3);
	

}
