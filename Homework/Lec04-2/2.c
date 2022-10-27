#include <stdio.h>
#include <stdlib.h>
char buffer [33]; 
char * inttohex(int aa)
{
sprintf(buffer, "%x", aa);
return (buffer);
}



int main(){
    int d1,d2,d3,d4,number;
    char *number2;

    scanf("%d",&number);
    //printf("%d",number);
    number2 = inttohex(number);
    printf("\n%s",number2);

    //printf()

}