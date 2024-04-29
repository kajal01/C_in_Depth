#include<stdio.h>
int main(void)
{
    int x, y, z, k=10;
    k+= (x=5, y=x+2, z=x+y);
    printf(" x=%d , y=%d , z=%d, k=%d\n", x,y,z,k); // 5,7,12,22
    return 0;
}


/*
in line 5 , since bracket is used , the value that will be alloted to lhs will be last . that is , k+=z
If there was no bracket , first value in rhs will be alloted to lhs , that is k+=x*/