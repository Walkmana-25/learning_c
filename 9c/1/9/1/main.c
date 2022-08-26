#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1 ; i<= 10; i++) {
        printf("メッセージ\n");
    }
    for (i = 1; i <= 9999 ; i++) {
        printf("%02d回目\n", i);
    }
    return 0;
}