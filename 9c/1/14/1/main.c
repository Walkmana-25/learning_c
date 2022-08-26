#include <stdio.h>
int main(void)
{
    char c = 'A';//数字
    int suuti;

    if (c >= '0' && c<= '9'){
        //判定部分
        suuti = c - '0';//数値に変換

    } else{
        suuti = 0;
    }

    printf("%d\n", suuti);

    return 0;
    }