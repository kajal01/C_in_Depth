#include<stdio.h>
int main(void)
{
    int x,y,z;
    x = 8++;    //error : lvalue required as increment operand
    y = ++x++;  //same error as above
    z = (x+y)--;    //same error as above
    printf("x=%d , y=%d, z=%d\n", x,y); // error : %d expects a matching int argument
    return 0;
}

/*
++ and -- operators operate on variable only , not on constants. 

8++  ---> 8=8+1  ----> in order to store rhs into lhs , lhs must be a variable , not constant.
*/