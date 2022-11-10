#include <stdio.h>

int a_1, a_n, d;

int sum(int a_i){
    int sum=0,a;

    for(a=a_1; a<=a_n; a=a+d){
        sum = sum+a;
    }

    return sum;
}

int main()
{
    scanf("%d %d %d", &a_1, &a_n, &d);
    printf("%d", sum(a_1));
    return 0;
}