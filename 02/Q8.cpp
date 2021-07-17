#include<stdio.h>
int main( ) {

int a = 0, b;

int i, j, k, l;

char x;

double c, d;

a -= -5 - 5; //a=10

b = -3 - - ( - 3 ) ; //b=-6

c = a + 7; //c=17

d = b + 4.0; //d=-2

x = a + b + 65; //x=E

i = j = k = l = 1;

i *= (k += (2 * (l -= (3 / j--))));

printf( "c_int = %d,c_double = %lf, c = %lf\n", (int)c, c, a + 7) ;

printf ( "d_int = %d,d_double = %lf, d = %lf\n", (int)d, d, b + 4.0) ;

printf ( "x = %c\n", x) ;

printf ( "i = %d, j = %d, k =%d, l = %d\n", i, j, k, l);

return 0;

}
