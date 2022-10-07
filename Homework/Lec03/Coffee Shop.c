#include <stdio.h>

int main(){
    int a,b,c,d,sum,x,y;
    scanf("%d %d", &x,&y);
    
    if (x>=1 && x<=4 && y>=1 && y<=20){

    if (x==1){
        sum = 110*y;
    }

        if (x==2){
        sum = 150*y;
    }

        if (x==3){
        sum = 135*y;
    }

        if (x==4){
        sum = 145*y;
    }

    printf("The total price is %d dollars!",sum);
}else printf("Wait, what?");
}  