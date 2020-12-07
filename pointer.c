//Pointers in C
#include <stdio.h>
#include <string.h>

int main()
{
   int number = 15;
   int *p_number; //init pointer
   p_number = &number;  //pointer contains the number var address
   printf("Value is %d and %d, address is %p\n", number, *p_number, p_number);

   int *p_array;
   int array1[] = {1,2,3,4,5,6,7,8,9,10};
   p_array = array1;
   printf("Array value is %d, address is %p\n", *p_array+1, p_array);

   for(int i = 1; i < 10; i++)
   {
       printf( "Index [%d], Value[%d], Pointer[%p]\n", i , *p_array, p_array);
       p_array++;
   }


}