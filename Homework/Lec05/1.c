#include <stdio.h>
#include <math.h>
#define MAX_SIZE 256

void print_C(unsigned int mask[][MAX_SIZE]);
void print_M(unsigned int mask[][MAX_SIZE]);
void print_Y(unsigned int mask[][MAX_SIZE]);
void print_K(unsigned int mask[][MAX_SIZE]);
void CMYK_to_RGB();



int main(){
    int i,j;
    int a,b;
    float c[999];
    float y[999];
    float m[999];
    float k[999];
    float R[999];
    float G[999];
    float B[999];

    scanf("%d %d",&a, &b);
    int count;
    count = a*b;
    
    for(i=0; i<count; i++){
        scanf("%f",&c[i]);
    }

    for(i=0; i<count; i++){
        scanf("%f",&y[i]);
    }

    for(i=0; i<count; i++){
        scanf("%f",&m[i]);
    }

    for(i=0; i<count; i++){
        scanf("%f",&k[i]);
    }
    /*
    for (i=0; i<count; i++){
        printf("%.1f ",c[i]);
    }printf("\n");
    for (i=0; i<count; i++){
        printf("%.1f ",y[i]);
    }printf("\n");
    for (i=0; i<count; i++){
        printf("%.1f ",m[i]);
    }printf("\n");
    for (i=0; i<count; i++){
        printf("%.1f ",k[i]);
    }printf("\n");
    */
    int a1[999],a2[999],a3[999];

    for(i=0;i<count;i++){
        R[i] = 255*(100-c[i])/100*(100-k[i])/100;
        G[i] = 255*(100-y[i])/100*(100-k[i])/100;
        B[i] = 255*(100-m[i])/100*(100-k[i])/100;
        
        a1[i] = lround(R[i]);
        a2[i] = lround(G[i]);
        a3[i] = lround(B[i]);

    }
    
    for(i=0;i<count;i++){
        printf("#%02x%02x%02x",a1[i],a2[i],a3[i]);
        if (i!=count-1){
            printf(" ");
        }

        if (i%(a)==a-1 && i!=0){
            printf("\n");
        }
    }
        
        
        
    }

void print_C(unsigned int mask[][MAX_SIZE]){}
void print_M(unsigned int mask[][MAX_SIZE]){}
void print_Y(unsigned int mask[][MAX_SIZE]){}
void print_K(unsigned int mask[][MAX_SIZE]){}
void CMYK_to_RGB(){}
