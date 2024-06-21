#include<stdio.h>
int main()
/*{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;
    printf("Value of i=%d\n",i);
    printf("Value of j=%f\n",j);
    printf("Value of k=%c\n",k);
    x=&i;
    y=&j;
    z=&k;
    printf ( "Original address in x = %u\n", x );
    printf ( "Original address in y = %u\n", y) ;
    printf ( "Original address in z = %u\n", z );
    x++;
    y++;
    z++;
    printf ( "New address in x = %u\n", x ) ;
    printf ( "New address in y = %u\n", y ) ;
    printf ( "New address in z = %u\n", z ) ;
    return 0;

}*/
/*{
   int arr[]={10,20,30,45,67,56,74};
   int*i,*j;

   i=&arr[1];
   j=&arr[5];
   printf("%d%d\n",j-1,*j-*i);
   return 0;
}*/

{
    char name[25];
    printf("Enter your full name");
    scanf("%[^\n]s",name);
    printf("%s",name);
}