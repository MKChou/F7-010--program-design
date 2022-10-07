#include <stdio.h>

int main(){
    long long a;
    scanf("%lld",&a);
   // printf("%lld",a);
    long long int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,b,x,y,z;
    //printf("%lld\n",a);
    
    
    a1 = a/100000000000;
    a2 = a%100000000000/10000000000;
    a3 = a%10000000000/1000000000;
    a4 = a%1000000000/100000000;
    a5 = a%100000000/10000000;
    a6 = a%10000000/1000000;
    a7 = a%1000000/100000;
    a8 = a%100000/10000;
    a9 = a%10000/1000;
    a10 = a%1000/100;
    a11 = a%100/10;
    a12 = a%10;
    
    /*
    printf("%lld\n",a);
    printf("%lld\n",a1);
    printf("%lld\n",a2);
    printf("%lld\n",a3);
    printf("%lld\n",a4);
    printf("%lld\n",a5);
    printf("%lld\n",a6);
    printf("%lld\n",a7);
    printf("%lld\n",a8);
    printf("%lld\n",a9);
    printf("%lld\n",a10);
    printf("%lld\n",a11);
    printf("%lld\n",a12);
    */
    a = a2+a4+a6+a8+a10+a12;
    b = a1+a3+a5+a7+a9+a11;
    x = a*3+b;
    y = x-1;
    z = y%10;
    z = 9-z;
    printf("%lld",z);

}