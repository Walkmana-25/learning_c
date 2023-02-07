#include <stdio.h>

int main(void)
{
    int array[10] = { 42, 79, 13 };

    printf("array[0] = %d\n", array[0]);
    printf("array[1] = %d\n", array[1]);
    printf("array[2] = %d\n", array[2]);
    printf("array[3] = %d\n", array[3]);
    printf("array[4] = %d\n", array[4]);
    int array2[] = { 42, 79, 13 }; /* è¦ç´ æ•°ãŒçœç•¥ã•ã‚Œã¦ã„ã‚‹ */

    printf("array2[0] = %d\n", array2[0]);
    printf("array2[1] = %d\n", array2[1]);
    printf("array2[2] = %d\n", array2[2]);
    int i;

    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    return 0;
}