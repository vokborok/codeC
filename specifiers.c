#include <stdio.h>
#include <unistd.h> 

int main(int argc, char const *argv[])
{
	char letter = 'A';
	double decimal = 5.489;
	int number = 100;
	printf("letter is: %c\n", letter );
    printf("decimal is:%g, number is: %d\n", decimal, number );
    printf("decimal is:%05.3g\n", decimal );

    short age, weight;
    char name[50];
    printf("Please enter your name:");
    scanf("%s", name);
    printf("Please enter your age:");
    scanf("%hd", &age);
    printf("Please enter you weight:");
    scanf("%hd", &weight);
    printf("Processing of gathered info... \n");
    sleep (3);
    printf("your name is: %s, your age is: %hd years, your weight is: %hd kg\n", name, age, weight  );
    printf("This is the address of variable 'name' %p\n", &name);
    printf("This is the address of variable 'name' %p\n", name);
    return 0;
}