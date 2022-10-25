#include <stdio.h>
#include <string.h>

int main()
{
    char hex[17], bin[65] = "";
    int i = 0;

    //printf("Enter any hexadecimal number: ");
    gets(hex);

    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'a':
            case 'A':
                strcat(bin, "1010");
                break;
            case 'b':
            case 'B':
                strcat(bin, "1011");
                break;
            case 'c':
            case 'C':
                strcat(bin, "1100");
                break;
            case 'd':
            case 'D':
                strcat(bin, "1101");
                break;
            case 'e':
            case 'E':
                strcat(bin, "1110");
                break;
            case 'f':
            case 'F':
                strcat(bin, "1111");
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
    }

    //printf("Hex:%s\n", hex);
    //printf("Bi: %s\n", bin);

    int abc=128,a=0,b=0,c=0,d=0;

    //printf("%c %c %c %c %c",bin[0],bin[1],bin[2],bin[3],bin[4]);

    //if (bin[0])

    for(i=0; i<8; i++){
        if(bin[i]== '1'){
            a=a+abc;
        }
        abc = abc/2;
    }
    
    
    abc = 128;
    for(i=8; i<16; i++){
        if(bin[i]== '1'){
            b=b+abc;
        }
        abc = abc/2;
    }

    abc = 128;
    for(i=16; i<24; i++){
        if(bin[i]== '1'){
            c=c+abc;
        }
        abc = abc/2;
    }

    abc = 128;
    for(i=24; i<32; i++){
        if(bin[i]== '1'){
            d=d+abc;
        }
        abc = abc/2;
    }

    printf("%d.%d.%d.%d",a,b,c,d);
    

    return 0;
}