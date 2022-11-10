#include<stdio.h>

int full_adder_c(int a, int b ,int c){
    if (a+b+c==2 || a+b+c==3){
        return 1;
    }else{
        return 0;
    }
}

int full_adder_x(int a, int b ,int c){
    if (a+b+c==0){
        return 0;
    }
    if (a+b+c==1){
        return 1;
    }
    if (a+b+c==2){
        return 0;
    }
    if (a+b+c==3){
        return 1;
    }
    
}

# define LEN 5

int main() {
    int a[LEN], b[LEN], ans[LEN], c = 0;
    for(int i = 0 ; i < LEN; ++i) {
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i < LEN; ++i) {
        scanf("%d", &b[i]);
    }

    for(int i = 0 ; i < LEN ; ++i) {
        ans[i] = full_adder_x(a[i], b[i], c);
        c = full_adder_c(a[i], b[i], c);
    }
    for(int i = 0 ; i < LEN; ++i) {
        printf("%d ", ans[i]);
    }
    printf("%d", c);
}
