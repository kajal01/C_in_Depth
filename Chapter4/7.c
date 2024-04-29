#include<stdio.h>
int main(void)
{
    int a = 4 , b=8 , c = 3, d = 9, z;
    z = a++ + ++b *  c-- - --d;
    printf(" a=%d, b=%d, c=%d, d=%d, z=%d\n", a,b,c,d,z);
    return 0;
}

/*
++b * c-- => 9*3
z = 4 + 27 - 8 = 23
*/