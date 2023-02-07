#include <stdio.h>

int main(void)
{
    double money = 1;
    int month = 1;

    while (money < 10000000)
    {
        printf("%02d月目:%7.0f円\n", month, money);
        money *= 2;
        month ++;
    }

    printf("%02d月目に%0.7f円となる\n", month,money);

    return 0;
    
}