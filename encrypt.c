#include <stdio.h>
#define SIZE_STR 100
void string(char *p_string);

int main()
{
    char str[SIZE_STR];
    char *p_string = str;
    printf("Please enter an string to encrypt\n");
    fgets(str, SIZE_STR, stdin);
    //printf("String to encrypt: %s\n", str);
    string(str);
    printf("Encrypted string is: %s\n", str);
    string(str);
    printf("String decrypted: %s\n", str);
}

void string(char *p_string)
{
    while(*p_string)
    {
      *p_string = *p_string ^ 31;
      *p_string++;

    }
}