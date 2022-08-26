#include <stdio.h>

int main(void)
{
    const double EXCISETAX = 0.05;
    int price;

    printf("本体価格:");
    scanf("%d", &price);
    price = (int)((1 + EXCISETAX) * price);
    printf("性込価格:%d\n", price);

    return 0;
}