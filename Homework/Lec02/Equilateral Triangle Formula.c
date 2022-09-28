#include <stdio.h>
#include <math.h>

int main () {
    float ans, a;
    scanf("%f",&a);
    if (a>0 && a<=200){
        ans = (powf(3,0.5)*powf(a,2)/4);
        printf("%.3f",ans);
    }
    
    return 0;
}