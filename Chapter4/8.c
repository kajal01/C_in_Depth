#include<stdio.h>
int main(void)
{
    int a=14, b, c;
    a = a%5;    //4
    b = a/3;    //1
    c = a/5%3;  //4/5=0 , 0%3=0
    printf("a=%d, b=%d, c=%d\n", a,b,c);
    return 0;
}