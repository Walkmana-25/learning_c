#include <stdio.h>

int sum(int);
int sum2(int,int);

int main(void)
{
    sum(50);
    sum2(50,100);
    return 0;

}

int sum(int max)
{
    printf("%d\n", (1 + max) * max / 2);
    return 0;
}

int sum2(int min, int max)
{
    printf("%d\n", (min + max) * (max - min + 1) / 2);
    return 0;
}