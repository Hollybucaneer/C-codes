#include<stdio.h>
int a=10;
int main()
{
    printf("global variable is %d\n", a);
    {
        int a=45;
        printf("local variable is %d\n", a);
    }
    printf("final global variable is %d\n",a);
    return 0;
}