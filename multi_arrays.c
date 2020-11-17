#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int massiv[2][3] = {{1,2,3}, {4,5,6}};
	printf("element [0][0] = %d\n", massiv[0][0] );
	//
	int a[] = {1,2,3,4,5,6,7,8,9};
	int b[9] = {};
	printf("size is %ld\n", sizeof(a));
	printf("size is %ld\n", sizeof(b));
}