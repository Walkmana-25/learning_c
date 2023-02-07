#include <stdio.h>

int main(void)
{
    double left,right;
    left = 10;
    right = 3;
    printf(
        "%f\n%f\n%f\n%f\n", 
        left + right,
        left - right,
        left * right,
        left / right
    );
    return 0;
}