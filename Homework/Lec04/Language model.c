#include <stdio.h>

int main(){
    long double a,b,c,d,e,ans;
    scanf("%Lf",&a);
    scanf("%Lf",&b);
    scanf("%Lf",&c);
    scanf("%Lf",&d);
    scanf("%Lf",&e);
    
    ans = a*b*c*d*e;
    //printf("%.16Lf %.16Lf %.16Lf %.16Lf %.16Lf\n",a ,b ,c ,d ,e);
    printf("%.15Lf",ans);
}