#include <stdio.h>

int main()
{
    int t = 10;
    (t == 10) ? printf("True\n"): printf("False\n");
    ++t;
    if (t == 10)
        printf("True %d\n", t);
    else if (t == 11)
        printf("True %d\n", t);
    else
        printf("False\n");



}