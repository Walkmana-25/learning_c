#include <stdio.h>

int main(void)
{
    printf("Hello\n");
    int value;
    value = 10;
    printf("%d\n\n", value);
    int left;
    int right;
    left = 10;
    right = 3;
    printf("%d\n", left + right);
    printf("%d\n", left - right);
    printf("%d\n", left * right);
    printf("%d\n", left / right);
    printf("%d\n", left % right);
    value = 10 + 30;
    printf("%d\n", value); 
    value = 10;
    value += 30;
    printf("%d\n", value);
    value = 10;
    printf("%d\n", value);
    value++;
    printf("%d\n", value);
    value--;
    printf("%d\n", value);
    return 0;
    
}