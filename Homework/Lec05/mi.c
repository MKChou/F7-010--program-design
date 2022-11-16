#include <stdio.h>

int main(){
    int enter, i=0,j=0;;
    int store[999][999];
    char str;
    scanf("%d",&enter);

    while(i<enter){
        while(1){
            scanf("%d",&store[i][j]);
            if(store[i][j]==0){
                break;
            }
            }
            j=j+1;
        }
        i=i+1;
        j=0;
          
    }

    printf("--------------------------------------\n"); 
    printf("%d %d %d\n",store[0][0],store[0][1],store[0][2]);
    printf("%d %d %d\n",store[1][0],store[1][1],store[1][2]);
    printf("%d %d %d\n",store[2][0],store[2][1],store[2][2]);
    printf("%d %d %d\n",store[3][0],store[3][1],store[3][2]);
    printf("%d %d %d\n",store[4][0],store[4][1],store[4][2]);
    printf("%d %d %d\n",store[5][0],store[5][1],store[5][2]);
    printf("%d %d %d\n",store[6][0],store[6][1],store[6][2]);
    printf("%d %d %d\n",store[7][0],store[7][1],store[7][2]);
    printf("%d %d %d\n",store[8][0],store[8][1],store[8][2]);
}