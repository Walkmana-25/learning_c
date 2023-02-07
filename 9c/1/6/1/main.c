#include <stdio.h>

int main(void)
{
    int data;
    double data2;
    scanf("%d", &data);
    printf("%d\n", data);
    scanf("%lf", &data2);
    printf("%f\n", data2);
    int data3, data4;
    scanf("%d%d", &data3, &data4);
    printf("%d,%d\n", data3, data4);

    return 0;
}