#include <stdio.h>
#include <math.h>
#define MAX_SIZE 256

unsigned int W, H;
unsigned int image[MAX_SIZE][MAX_SIZE] = {0};

char layers[4] = {'C', 'M', 'Y', 'K'};

void print_C(unsigned int mask[][MAX_SIZE]){}
void print_M(unsigned int mask[][MAX_SIZE]){}
void print_Y(unsigned int mask[][MAX_SIZE]){}
void print_K(unsigned int mask[][MAX_SIZE]){}
void CMYK_to_RGB(){}
int co(int c,int y,int m, int k){
    int R,G,B;
    R= 255*(100-c)/100*(100-k)/100;
    G= 255*(100-y)/100*(100-k)/100;
    B= 255*(100-m)/100*(100-k)/100;
    printf("#%02x%02x%02x",R,G,B);
}
int main()
{
    // Get the dimension of the image.
    scanf("%u %u", &W, &H);

    // Declare the mask for single ink color.
    unsigned int mask[MAX_SIZE][MAX_SIZE] = {0};

    // For each layer, do the following:
    for (int layer = 0; layer < 4; ++layer)
    {
        // Get color mask.
        for (int i = 0; i < H; ++i)
        {
            for (int j = 0; j < W; ++j)
            {
                scanf("%u", &mask[i][j]);
            }
        }

        // Print a layer of that color to the paper.
        switch (layers[layer])
        {
            case 'C': print_C(mask); break;
            case 'M': print_M(mask); break;
            case 'Y': print_Y(mask); break;
            case 'K': print_K(mask); break;
        }
    }
    int main()
{   
    int max[256][256];
    int a, b,i,j,c,y,m,k;
    scanf("%d %d", &a, &b);

    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            scanf("%d %d %d %d",&max[i][j],&max[i][j+1],&max[i][j+2],&max[i][j+3]);
            //printf("%d %d %d %d\n",c,y,m,k);
        }
    }

    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            co(max[i][j],max[i][j+1],max[i][j+2],max[i][j+3]);
        }
        printf("\n");
    }

    // Convert CMYK color to RGB color.
    CMYK_to_RGB();

    // Show the final result.
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            printf("#%06x ", image[i][j]);
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}
