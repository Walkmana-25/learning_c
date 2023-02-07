#include <stdio.h>

struct student
{
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;

};

int main(void)
{
    struct student data;

    data.year = 10;

    printf("%d\n", data.year);

    return 0;
}