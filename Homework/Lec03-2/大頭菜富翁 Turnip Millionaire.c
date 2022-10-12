#include <stdio.h>

int main(){
    float enter;
    float w = 0.9;
    float u = 0.1;
    float b = -51;
    float uu = -0.98;
    float bb = 153;

    //printf(":");
    scanf("%f",&enter);
    //printf("%f",enter);

    float y = enter;
    float h =0;
    int i ;

    for(i=0;i<5;i++){   
        h = w*y+u*h+b;
        y = uu*h+bb;
        printf("%.1f ",y);
    }
}