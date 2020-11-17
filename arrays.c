#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	char array[7] = {'S','t','r','i','n','g','\0'};
	char string[] = {"Stroka"}; 
	int number[3];
	number[0] = 1;
	number[1] = 10;
	number[2] = 12;

	for(int j=0; j<7; j++)
	{
	    printf("%c\n", string[j]);	
	}

	printf("%s\n", string );
	printf("%s\n", number );
	//return 0;
}