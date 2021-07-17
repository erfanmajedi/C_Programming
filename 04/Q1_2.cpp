#include <stdio.h>
int check(int m);
int main() {
    int k = 35, z;
    z =check(k);
    printf ("\n%d", z);
}

int check (int  m ) {
    
    if (m > 40)
        return (1);
    else
        return (0);
}

