#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	/* code */
    char t = 'A';

	int two = 2;

	printf("the addres of two is %p\n", &two );

	float a = (double)two;

	printf("the addres of two is %p\n", &a );

	printf("char to int %d\n", (int)t );


	/*float result = 3 / (two + 0.0); 
    printf("result is: %2.1f \n", result);
	char c = 'A';
	//(int) c;*/
 
	return 0;
}