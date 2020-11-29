#include <stdio.h>

int main()
{
    printf("This is ciphers form 1 to 10");
    for(int i=0; i<=10; i++)
    {
        printf("this is our value %d\n", i);
    }

    printf("This is ciphers from 1  to 10 using while...\n");
    int number = 0;
    while(number <= 10)
    {
        printf("%d\n", number);
        number++;
    }

}