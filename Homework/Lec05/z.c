#include <stdio.h>

int main(){
    //int c=21,m=10,y=0,k=85; //30/34/38
    //int c=0,m=100,y=0,k=0;
    //int c=50,m=87,y=39,k=30;
    float c=44,m=72,y=40,k=12;
    float r, g, b;

    r= 255*(100-c)*(100-k)/10000;
    g= 255*(100-m)*(100-k)/10000;
    b= 255*(100-y)*(100-k)/10000;

    printf("%f %f %f\n",r,g,b);

    printf("%x %x %x",r,g,b);
    
}