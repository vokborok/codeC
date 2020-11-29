#include <stdio.h>

int main()
{
    printf("Choose the film and read description:\n");
    printf("1.Terminator.:\n");
    printf("2.Star Treck.:\n");
    printf("3.Spider man:\n");
    printf("4.Forest Gupm:\n");
    int number = 0;
    scanf("%d", &number);
    switch(number){
      case 1: printf("Human race fighting with robots form future.\n");
      break;
      case 2: printf("A long time ago in a galaxy far far away.\n");
      break;
      case 3: printf("A story about poor mutant boy.\n");
      break;
      case 4: printf("Most famous running boy.\n");
      break;
      default:printf("Wrong option.\n");
    }
    printf("Thank you for watching.\n");

}