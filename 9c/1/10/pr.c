#include <stdio.h>

int main(void)
{
    int score;
    do{
        scanf("%d", &score);
    }while(score < 0 || score > 100);

    return 0;
}