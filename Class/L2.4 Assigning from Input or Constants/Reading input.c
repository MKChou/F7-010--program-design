#include <stdio.h>

int main(){
    int x=1, y=2;
    printf("%d %d\n",x, y);
    printf("%u %u\n",&x, &y); 
    printf("%x %x\n",&x, &y); //hexadecimal
    printf("%p %p\n",&x, &y);
}