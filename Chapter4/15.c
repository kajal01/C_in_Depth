#include<stdio.h>
int main(void)
{
    int a =10 , b=3, max;
    a>b? (max=a) : (max=b);     // max=b need to be inside () in order to be a complete expression
    printf("%d\n", max);    //10
    return 0;
}