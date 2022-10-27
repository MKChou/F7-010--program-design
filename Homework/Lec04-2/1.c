#include <stdio.h>

int main(){
    long long unsigned a, b, c;
    
    scanf("%llu %llu %llu",&a,&b,&c);

    long long unsigned NUMBER_1 = 0x38E38E38E38E3800LLU; //(4099276460824344600*2+3074457345618258400*4+2049638230412172300*2)%9000000000000000000
    long long unsigned NUMBER_2 = 0x2AAAAAAAAAAAAAAALLU; //3074457345618258400*4
    long long unsigned NUMBER_3 = 0x1C71C71C71C71C71LLU; //2049638230412172300*2
    long long unsigned NUMBER_4 = 0x7CE66C50E2840000LLU; //9000000000000000000

    
    


    long long unsigned d=(a*NUMBER_1)%NUMBER_4;
    long long unsigned e=(b*NUMBER_2)%NUMBER_4;
    long long unsigned f=(c*NUMBER_3)%NUMBER_4;
    long long unsigned g=(d+e+f)%NUMBER_4;
    printf("%llu",g);
}