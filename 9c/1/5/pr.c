#include <stdio.h>
int main(void){
    int drink = 198;
    int milk = 138;
    printf("%d\n", (int)(1000 - (drink + milk * 2) * 1.05));
    return 0;
}