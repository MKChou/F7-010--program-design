#include <stdio.h>

int main(){
    long long int enter1,i,sum=0;
    
    scanf("%lld",&enter1);
    long long int v[enter1];
    long long int x[enter1];

    for(i=0; i<enter1; i++){
        scanf("%lld",&v[i]);}
        //printf("%d ",v[i]);
    

    for(i=0;i<enter1;i++){
        sum = sum+v[i];
        x[i] = sum;}
       //printf("%d ",x[i]);
    
    for(i=0;i<enter1;i++){
        //printf("%d %d\n",v[i],x[i]);
    }
    
    for(i=0;i<enter1;i++){
        if(x[i]%v[i]==0){
            printf("%lld %lld\n",x[i],v[i]);
        }}

    }