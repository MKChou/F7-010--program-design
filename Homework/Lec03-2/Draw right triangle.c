#include <stdio.h>

int main(){
    int a,enter,i,j;
    //printf("Enter: ");
    scanf("%d%d",&a,&enter);

    switch (a)
    {
    case 1:
        for (i=enter; i>0; i--){
            for (j=0;j<i;j++){
                printf("*");
            }
            printf("\n");
        }
        break;
        
    case 2:
        for (i=1; i<=enter; i++){
            for(j=1; j<=i; j++){
                printf("*");
            }
            printf("\n");
        }
        break;

    case 3:
        for (i=0; i<enter; i++){
            for(j=0; j<i; j++){
                printf(" ");
            }
            for(j=0; j<enter-i; j++){
                printf("*");
            }
            printf("\n");
        }
        break;
        
    case 4:
        for (i=enter; i>0; i--){
            for(j=0; j<i-1; j++){
                printf(" ");
            }
            for(j=0; j<enter-i+1; j++){
                printf("*");
            }
            printf("\n");
        }
        break;
    }
}
