#include <stdio.h>
#include <stdlib.h>


char buffer [33]; 
char * inttohex(int aa)
{
sprintf(buffer, "%x", aa);
return (buffer);
}



int main(){
    int b=3;

    char *number;
    number = inttohex(b);

    printf("%s",number);
    
}

