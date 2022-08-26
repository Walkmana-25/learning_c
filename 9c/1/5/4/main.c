#include <stdio.h>

int main(void)
{
    int a = 10000, b = 500, c = 3;

    printf(
        "Aは%5dです。\nBは%5dです。\nCは%5dです。\n",
        a,b,c
    );
    printf(
        "Aは%05dです。\nBは%05dです。\nCは%05dです。\n",
        a,b,c
    );
    double pi = 3.14159;
    printf("%6.2f\n", pi);
    printf("123456\n");
    return 0;
}