#include <stdio.h>
#include <ctype.h>

int main(){
    char v;
    int i=0,count=0;
    int flag =1,number;
    scanf("%d",&number);
    getchar();


    while(count<2){
        v =getchar();
        v=tolower(v);
       //printf("%c",v);

        

        if(i==2){
            v=toupper(v);
            flag =0;
        }




        while(count!=0){
            printf("%c",v);
            break;
        }
        if(v=='\n'){
            count=count+1;
        }
        i=i+1;
    }

    
    
    
    
   
}