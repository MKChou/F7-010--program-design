#include <stdio.h>
#define MAX_SIZE 256
void print_C(unsigned int mask[][MAX_SIZE]){}
void print_M(unsigned int mask[][MAX_SIZE]){}
void print_Y(unsigned int mask[][MAX_SIZE]){}
void print_K(unsigned int mask[][MAX_SIZE]){}
void CMYK_to_RGB(){}

int ans[100][100][4];

int i=0,j=0;

int co(int c,int y,int m, int k){
    int R,G,B;
    R= 255*(100-c)/100*(100-k)/100;
    G= 255*(100-y)/100*(100-k)/100;
    B= 255*(100-m)/100*(100-k)/100;
    //printf("#%02x%02x%02x",R,G,B);
    ans[i][j][0]=R;
    ans[i][j][1]=G;
    ans[i][j][2]=B;
}


int main()
{   
    
    int a, b,c,y,m,k;
    scanf("%d %d", &a, &b);

    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            scanf("%d %d %d %d",&c,&y,&m,&k);
            co(c,y,m,k);
        }
    }
    printf("#");
    for(int abc=0;abc<3;abc++){
    printf("%02x", ans[0][0][abc]);
    }
}