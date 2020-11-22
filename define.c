#include <stdio.h>
#define SUM(a, b) (a+b)*2
#define p 2

int main(int argc, char const *argv[])
{
	/* code */
	int a,b,c,d;
	a = 3;
	b = 5;
	c = (a+b)*2;
	d = SUM(a,b);
	printf("a = %d , b = %d\n", a, b );
	printf("c = %d , d = %d\n", c, d );
    #if p == 1
    	printf("Scenario 1 will be executed p = %d\n",p );
    #elif p == 2
    	printf("Scenario 2 will be executed p = %d\n",p );
    #else
    	printf("Scenario is failed p = %d\n",p );
    #endif
    getchar();
    #undef p
    #define p 5000
    printf("Now p = %d\n",p );
}