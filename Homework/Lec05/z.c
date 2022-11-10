#include <stdio.h>

int main(){
    int c=21,y=10,m=0,k=85;
    int r, g, b;

    r= 255*(100-c)/100*(100-k)/100;
    g= 255*(100-y)/100*(100-k)/100;
    b= 255*(100-m)/100*(100-k)/100;

    printf("%d %d %d\n",r,g,b);

    printf("%x%x%x",r,g,b);
    
}