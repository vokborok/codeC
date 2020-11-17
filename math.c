#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* this is a few useless rows of code */
	int a = 10, b = 20, c = 3, d = 2 , e = 4;
	int itog = 0, itog2 = 0;
    itog = a + b - c * d / e;	
    printf("itog = %d\n", itog);
    printf("Increment for a %d\n", ++a );
    printf("Prefix increment for a %d\n", a++ );
    printf("var 'a' right after prefix increment %d\n", a );
    printf("decrement for 'b' %d\n", --b );
    printf("Prefix decrement for 'b' %d\n", b-- );
    printf("var 'b' right after prefix increment %d\n", b );
    printf("Ostatok = %d\n", 11 % 8 );
    printf("Ostatok = %d\n", 20 % 3 );

	return 0;
}