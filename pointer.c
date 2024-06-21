#include <stdio.h>
int main()
{
    int i=10;
    int*j= &i;
    int **k= &j;
    printf("value of i: %d\n", i);
    printf("value of j: %d\n", j);
    printf("value of j: %d\n", *j);
    printf("value of k: %d\n", *k);
    printf("value of k: %d\n", &j);
    return 0;
}