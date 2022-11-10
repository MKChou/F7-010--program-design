#include <stdio.h>

int main()
{
    int d1,d2,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0;
    int i=0;
    int number1[99] = {0,0,0,0,0,0};
    

    while(i<75){
        scanf("%d %d",&d1,&d2);
        if(d2%2==0){
            number1[d1-1]=number1[d1-1]-1;
            if(number1[d1-1]==-1){
                number1[d1-1]=9;
            }
        }
        
        if(d2%2==1){
            number1[d1-1]=number1[d1-1]+1;
            if(number1[d1-1]==10){
                number1[d1-1]=0;
            }
        }

        i=i+1;
    }

    for(i=0;i<6;i++){
        printf("%d ",number1[i]);
    }
    
}