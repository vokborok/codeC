#include <stdio.h>

int main()
{
printf("Using break/continue/goto\n");
for(int i = 0; i <= 10; i++)
{
if(i == 8)
break;
if(i == 3)
goto marker;
printf("Value is %d\n", i);
}
marker:
printf("I'm GOTO\n");
}