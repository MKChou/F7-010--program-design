// g++ cpp-atoi.cpp -o a.out
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,sum=0;
    char str;
    int enter[999];
    int num[999];

    for(i=0;i<64;i++){
        scanf("%d",&enter[i]);
    }

    i=0;
    while(1){
        scanf("%d",&num[i]);
        //printf("num[%d]:%d \n",i,num[i]);
        str = getchar();
        
        if(str =='\n'){
            break;
        }

        i=i+1;
    }
    /*
    printf("-------------------------------\n");

    for(int q=0; q<64; q++){
        printf("%d ",enter[q]);
    }
    printf("\n-------------------------------\n");
    for(int i=0; i<64; i++){
        printf("%d ",num[i]);
    }
    */

   int count1=0,count2=0;
   
   for(j=0;j<99;j++){
    for(i=0;i<99;i++){
        if(enter[i]==num[j]){
            enter[i]=0;
        }
    }}
   


/*
   for(int q=0; q<64; q++){
        printf("%d ",enter[q]);
        if(q%8==7){
            printf("\n");
        }
    }
*/

    int qqq=0,qq=0;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;} //1

    qq = qq+8;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;//2
    }
    qq = qq+8;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;//3
    }
    qq = qq+8;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;//4
    }
    qq = qq+8;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;//5
    }
    qq = qq+8;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;//6
    }
    qq = qq+8;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;//7
    }
    qq = qq+8;

    if(enter[0+qq]+enter[1+qq]+enter[2+qq]+enter[3+qq]+enter[4+qq]+enter[5+qq]+enter[6+qq]+enter[7+qq]==0){
        sum = sum+1;//8
    }
    

    if(enter[0]+enter[9]+enter[18]+enter[27]+enter[36]+enter[45]+enter[54]+enter[63]==0){
        sum = sum+1;//00
    }

    if(enter[7]+enter[15]+enter[22]+enter[29]+enter[36]+enter[43]+enter[50]+enter[57]==0){
        sum = sum+1;//77
    }
    int qqqq=0;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;
    if(enter[0+qqqq]+enter[8+qqqq]+enter[16+qqqq]+enter[24+qqqq]+enter[32+qqqq]+enter[40+qqqq]+enter[48+qqqq]+enter[56+qqqq]==0){
        sum = sum+1;//01
    }qqqq=qqqq+1;


    
 

    
    


    

    printf("%d",sum);
}
