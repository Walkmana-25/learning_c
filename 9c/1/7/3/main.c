#include <stab.h>

int main(void)
{
    int score;
    printf("Please enter the score.\n");
    scanf("%d", &score);

    if (score > 100)
    {
        printf("Fix Score because input is larger than 100.\n");
        score = 100;
    }

    printf("Score is %d.\n", score);

    return 0;
}