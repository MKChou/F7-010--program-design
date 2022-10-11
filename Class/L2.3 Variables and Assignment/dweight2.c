#include <stdio.h>

int main(main){
    int height, length, width, volume, weight;

    printf("Enter box height: ");
    scanf("%d",&height);
    printf("Enter box length: ");
    scanf("%d",&length);
    printf("Enter box width: ");
    scanf("%d",&width);

    volume = height*length*width;
    weight = (volume+165)/166;

    printf("Volume: %d\n",volume);
    printf("Dimesional weight: %d \n",weight);

    return 0;
}