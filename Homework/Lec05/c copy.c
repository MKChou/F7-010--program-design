#include <stdio.h>

int main(){
    int student,i=0,range;
    int number[999];
    int range_low[999];
    int range_high[999];
    scanf("%d",&student);

    while(i<student){
        scanf("%d",&number[i]);
        i=i+1;
    }

    scanf("%d",&range);
    i=0;
    while(i<range){
        scanf("%d %d",&range_low[i],&range_high[i]);
        i=i+1;
    }

    int a=0,b=0,c=0,j=0;
    
    for(j;j<range;j++){
        for(i=0;i<student;i++){
            if(number[i]<range_low[j]){
                a=a+1;
            }
            if(number[i]>=range_high[j]){
                c=c+1;
            }
            if(number[i]<range_high[j] && number[i]>=range_low[j]){
                b=b+1;
            }
        }
        printf("%d %d %d\n",a,b,c);
        a=0;b=0;c=0;
    }
    
}