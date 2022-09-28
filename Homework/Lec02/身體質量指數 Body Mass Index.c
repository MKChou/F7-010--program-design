#include<stdio.h>
#include<math.h>
int main () {
    float BMI, H, W;
    
    scanf("%f%f",&H,&W);
    
  	BMI = W/powf( H/100 ,2);
    printf("%.6f",BMI);
    return 0;
}
