#include<stdio.h>
int main(void)
{
    int a = 2, b=2, x, y;
    x= 4*(++a * 2 + 3);
    y = 4*(b++ * 2 + 3);
    printf("x=%d y=%d\n", x, y);    36, 28
    return 0;
}