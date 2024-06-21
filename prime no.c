#include<stdio.h>
int main()
{
    int i=2,count,a;
    for(i=2;i<=20;i++){
        for(count=2;count<i;count++){
            if(i%count==0){
                break;
            }
        }
        if (count==i){
            printf("%d is a prime no.\n",i);
        }
    }

}