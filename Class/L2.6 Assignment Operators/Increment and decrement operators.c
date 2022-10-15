#include <stdio.h>

int main(){
    int i=1;
    printf("i is %d:\n",--i); //先減一再print
    printf("i is %d:\n",i);

    int j=1;
    printf("j is %d:\n",j--); //先print再減一
    printf("j is %d:\n",j);

}