#include <stdio.h>

int main(void)
{
    int data[10];
    int i;

    for (i =0; i< 10; i++){
        printf("%d番目の数値を入力してください。:", i);
        scanf("%d", &data[i]);
    }
     for (i = 9; i >= 0; i--) {
        printf("%d\n", data[i]);
     }

     printf("\n");

     return 0;
}