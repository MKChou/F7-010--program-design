#include <stdio.h>

#define INIT_STRENGTH 50       //初始體力值
#define INIT_OBEDIENCE 20      //初始服從度

#define STRENGTH_EAT 5         //餵食時體力+5
#define OBEDIENCE_EAT 2        //餵食時服從度-2

#define STRENGTH_TRAIN 4       //訓練時體力-4
#define OBEDIENCE_TRAIN 5      //訓練時服從度+5

#define LEARN_STRENGTH 55      //體力值上限
#define LEARN_OBEDIENCE 28     //服從度下限

int main(){
    //printf("服從度下限：28 體力值上限：55\n");
    int power,fu,count=0;
    char c;

    power = INIT_STRENGTH;
    fu = INIT_OBEDIENCE;

    //printf("%d %d\n",fu,power);

    while(c != '\n'){
        scanf("%c",&c);
        //printf("%c",c);
        
        if(c=='e'){
            power = power+STRENGTH_EAT; //power+5
            fu = fu-OBEDIENCE_EAT;      //fu-2
        }

        if(c=='t'){
            power = power-STRENGTH_TRAIN;  //power-4
            fu = fu+OBEDIENCE_TRAIN;       //fu+5
        }

        //printf("服從:%d 體力:%d\n",fu,power);

        if(power<=55 && fu>=28){
            count = count+1;
            fu = INIT_OBEDIENCE;
        }
    }
    if(count>5){
        //printf("Yes");
    }
    //printf("%d",count);
    
    if(count>=5){
        printf("Yes");
    }else{
        printf("No");
    }
}
