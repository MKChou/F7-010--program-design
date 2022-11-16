#include <stdio.h>

int main(){
    int enter;
    int i=0, j=0;
    int max;
    int store[99][99];
    int ans;
    int sum[999];

    

    scanf("%d",&enter);


while(i<enter){
    scanf("%d",&store[i][j]);
    max = store[i][j];
    for(j=0;j<max;j++){
        scanf("%d",&store[i][j]);
        if(store[i][j]==0){
            break;
        }
        if(store[i][j]==0){
            break;
        }
    }
    i=i+1;
    j=0;
}

int star;

for(i=0;i<enter;i++){
    if(store[i][0]==0){
        sum[i]= 1;
        star = i+1;
    }
}

for(i=0;i<enter;i++){
    for(j=0;j<enter;j++){
    
    }
}





    printf("star:%d\n",star);





    for(i=0;i<999;i++){
        ans = ans + sum[i];
    }
    printf("sum:%d\n",ans);
    
    printf("--------------------------------------\n"); 
    printf("%d %d %d\n",store[0][0],store[0][1],store[0][2]);
    printf("%d %d %d\n",store[1][0],store[1][1],store[1][2]);
    printf("%d %d %d\n",store[2][0],store[2][1],store[2][2]);
    //printf("%d %d %d\n",store[3][0],store[3][1],store[3][2]);
    //printf("%d %d %d\n",store[4][0],store[4][1],store[4][2]);
    //printf("%d %d %d\n",store[5][0],store[5][1],store[5][2]);
    //printf("%d %d %d\n",store[6][0],store[6][1],store[6][2]);
    //printf("%d %d %d\n",store[7][0],store[7][1],store[7][2]);
    //printf("%d %d %d\n",store[8][0],store[8][1],store[8][2]);
    printf("--------------------------------------\n"); 
    printf("sum0:%d\n",sum[0]);
    printf("sum1:%d\n",sum[1]);
    printf("sum2:%d\n",sum[2]);

}