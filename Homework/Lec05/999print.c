#include <stdio.h>





int main(){
    int a, b, c, y, m, k, R, G, B;
    int i=0,j=0;
    scanf("%d %d",&a,&b);

    int z = a*b;
    int store[999][3];
    
    
   
    while(i<z){
        scanf("%d %d %d %d",&c,&y,&m,&k);
        R= 255*(100-c)/100*(100-k)/100;
        G= 255*(100-y)/100*(100-k)/100;
        B= 255*(100-m)/100*(100-k)/100;
        printf("%d %d %d\n", R, G, B);
        printf("%02x %02x %02x\n", R, G, B);
        store[i][0]= R;
        store[i][1]= G;
        store[i][2]= B;
        
        i=i+1;
        
    }
    
    
    /*
    j=0;
    for(i=0;i<z;i++){
        printf("%02x%02x%02x ",store[i][0],store[i][1],store[i][2]);
    }
    */
}