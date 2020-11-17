#include <stdio.h>

static int number = 500; // Global static variable

int main(int argc, char const *argv[])
{
	/* code */

	extern int number; //there we are using global static variable
	printf("variable 'number' = %d\n", number);
	extern int number2; // this variable will be located in another file
	printf("variable 'number2' = %d\n", number2 );
	return 0;
}