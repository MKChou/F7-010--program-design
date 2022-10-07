#include<stdio.h>

int main(void){
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    //printf("%d %d\n",a,b);

    x = a/b;
    y = a%b;
    printf("%d %d",x,y);
}