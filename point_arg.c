#include <stdio.h>

void func1(int *p);
void func2(int *p);
int main()
{
    int num = 100;
    int *p_num;
    p_num = &num;
    printf("Number is %d and %d Pointer is %p\n", num, *p_num, p_num);
    func1(p_num);
    printf("Number is %d and %d Pointer is %p\n", num, *p_num, p_num);
    func2(p_num);
    printf("Number is %d and %d Pointer is %p\n", num, *p_num, p_num);


}
void func1(*p)
{
    *p = *p * *p;
}
void func2(*p)
{
    *p = *p / (*p - 5000) * 2 ;
}