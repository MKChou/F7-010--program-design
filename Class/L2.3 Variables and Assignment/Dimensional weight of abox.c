#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;

    height = 8;  //Initialization
    length = 12; //Initialization
    width = 10;  //Initialization
    volume = height*length*width;
    weight = (volume+165)/166;
    printf("Dimensions: %dx%dx%d\n",length, width, height);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",weight);
    return 0;
}