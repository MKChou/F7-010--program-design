#include <stdio.h>

int main(){
    int enter,ans;
    int max=0;
    int min=2147483646; 
    scanf("%d",&enter);

    while (enter != -1){
        if(enter>max){
            max = enter;
        }
        if(enter<min){
            min = enter;
        }
        scanf("%d",&enter);    
    }
    ans = max-min;
    printf("%d",ans);
}