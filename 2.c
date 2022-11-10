#include <stdio.h>

int main(){
    int enter[999];
    int num[999];
    int i,j=0;
    char ch;

    for(i=0;i<64;i++){
        scanf("%d",&enter[i]);
    }

    i=0;

    while(1){
        scanf("%d",&num[i]);
        ch=getchar();

        if(ch=='\n'){
            break;
        }
        i=i+1;
    }

    for(j=0;j<99;j++){
        for(i=0;i<99;i++){
            if(enter[i]==num[j]){
                enter[i]=0;
            }
        }
    }


for(j=0;j<99;j++){
        for(i=0;i<99;i++){
            if(enter[i]==num[j]){
                enter[i]=0;
            }
        }
    }
/*
printf("-\n");
for(i=0;i<64;i++){
       printf("%d ",enter[i]);
    
    if( i%8==7 && i>=7){
        printf("\n");
    }
}*/

///
int count=0,sum=0,ii=0;

while(ii<=7){
    if(enter[0+count]+enter[1+count]+enter[2+count]+enter[3+count]+enter[4+count]+enter[5+count]+enter[6+count]+enter[7+count]==0){
        sum = sum+1;
    }
    count = count+8;
    ii=ii+1;
}


count=0;
ii=0;
while(ii<=7){
    if(enter[0+count]+enter[8+count]+enter[16+count]+enter[24+count]+enter[32+count]+enter[40+count]+enter[48+count]+enter[56+count]==0){
        sum = sum+1;
    }
    count = count+1;
    ii=ii+1;
}

if(enter[0]+enter[9]+enter[18]+enter[27]+enter[36]+enter[45]+enter[54]+enter[63]==0){
    sum = sum+1;
}

if(enter[7]+enter[14]+enter[21]+enter[28]+enter[35]+enter[42]+enter[49]+enter[56]==0){
    sum = sum+1;
}




printf("%d",sum);
}

