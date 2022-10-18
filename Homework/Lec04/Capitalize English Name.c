#include <stdio.h>
#include <ctype.h>

int main(){
    char v;
    int i=0,count=0;
    int flag =1,number;
    scanf("%d",&number);
    getchar();


    while(count !=number){
        v =getchar();
        v=tolower(v);
        

       
        if(flag==1){
            v = toupper(v);
            flag =0;
        }

        if(v ==' ' || v==';' || v=='.' || v==','){
            //v='';
            flag = 1;
        }

        if(v==';' || v=='.' || v==','){
            v='\n';
        }

        if(v=='\n'){
            count = count+1;
        }

        printf("%c",v);
        //printf("count:%d\n",count);

        i=i+1;
    }
}