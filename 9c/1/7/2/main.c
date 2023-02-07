#include <stdio.h>

int main(void)
{
    int suuti;
    scanf("%d", &suuti);
    if (suuti == 10)
        printf("入力値は10です。\n");
    if (suuti > 10)
        printf("入力値は10より大きいです\n");
    if (suuti < 10)
        printf("入力値は10より小さいです。\n");
    if (suuti >= 8 && suuti <= 12)
        printf("8~12の間です。\n");
    if (!(suuti >= 8 && suuti <= 12))
        printf("8~12の間ではありません。\n");

    return 0;
}