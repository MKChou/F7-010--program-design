#include <stdio.h>

int main(){
    int d1,d2,d3,d4,d5,d6;
    int P=100;
    int D=100;
    //scanf("%d%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5,&d6);

    while(P>0 && D>0){
        scanf("%d%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5,&d6);

        if( (d1+d2+d3)%2 == 1){
            if(d6>d5 && d5>d4){
                D=D-25;
            }else if (d4%2==d5%2 || d5%2 == d6%2){
                D=D-5;
            }
        }else{
            if(d5-d4>d6 || d4-d5>d6){
                P=P-15;
            }else if(d4+d5 != d6){
                P=P-5;
            }
        }
        //printf("%d %d\n",P,D);
    }
    if (P<=0){
        printf("Dragon wins");
    }
    if (D<=0){
        printf("Player wins");
    }
}