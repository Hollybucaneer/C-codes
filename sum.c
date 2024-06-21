#include<stdio.h>
int main()
{
    int num,rem1,rem2,rem3,sum;
    printf("enter 3 digit number:");
    scanf("%3d", &num);
    rem1=num%10;
    num=num/10;
    rem2=num%10;
    num=num/10;
    rem3=num%10;
   // num=num/10;
    sum= rem1+rem2+rem3;
    printf("sum=%d",sum);
    return 0;
}