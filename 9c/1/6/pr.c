#include <stdio.h>

int main(void)
{
    int input, ten_per,three_per,five_per,eight_per;
    //input
    scanf("%d", &input);

    //cal
    ten_per = (int)(input * 0.9);
    three_per = (int)(input * 0.7);
    five_per = (int)(input * 0.5);
    eight_per = (int)(input * 0.2);

    //output
    printf("定価:%d\n1割引:%d\n3割引:%d\n5割引:%d\n8割引:%d\n", input, ten_per, three_per, five_per, eight_per);

    return 0;

}