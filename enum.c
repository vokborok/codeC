#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	enum DAYS {MONDAY = 1, TUESDAY, ENVIRONMENT, THUESDAY, FRIDAY, SATURDAY, SUNDAY};
	printf("MONDAY = %d\n", MONDAY );
	printf("TUESDAY = %d\n", TUESDAY );
	printf("ENVIRONMENT = %d\n", ENVIRONMENT );
	printf("THUESDAY = %d\n", THUESDAY );
	printf("FRIDAY = %d\n", FRIDAY );
	printf("SATURDAY = %d\n", SATURDAY );
	printf("SUNDAY = %d\n", SUNDAY );
	
	int days = MONDAY + TUESDAY + ENVIRONMENT + THUESDAY + FRIDAY + SATURDAY + SUNDAY;
	printf("sum days: %d\n", days );
}