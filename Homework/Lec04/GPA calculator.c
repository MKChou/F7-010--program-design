#include <stdio.h>

int main(){
  char ch[99];
  char a;
  char b;
  int i=0,count=0,count2=0;
  float sum,GPA;

  while ( a!='\n'){
    scanf("%1c",&a);
    ch[count] = a;
    //printf("%c",ch[count]);
    count=count+1;
  }

  for(i=0;i<count;i++){
    //printf("%c",ch[i]);
  }

for(i=0; i<count; i++){
    if( ch[i-1]=='3' && ch[i]=='A' && ch[i+1]=='+'){sum=sum+3*4.3;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='A' && ch[i+1]=='+'){sum=sum+2*4.3;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='A' && ch[i+1]=='+'){sum=sum+1*4.3;count2=count2+1;}

    if( ch[i-1]=='3' && ch[i]=='A' && ch[i+1]=='-'){sum=sum+3*3.7;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='A' && ch[i+1]=='-'){sum=sum+2*3.7;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='A' && ch[i+1]=='-'){sum=sum+1*3.7;count2=count2+1;}

    if( ch[i-1]=='3' && ch[i]=='A' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+3*4.0;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='A' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+2*4.0;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='A' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+1*4.0;count2=count2+1;}
    //
    if( ch[i-1]=='3' && ch[i]=='B' && ch[i+1]=='+'){sum=sum+3*3.3;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='B' && ch[i+1]=='+'){sum=sum+2*3.3;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='B' && ch[i+1]=='+'){sum=sum+1*3.3;count2=count2+1;}

    if( ch[i-1]=='3' && ch[i]=='B' && ch[i+1]=='-'){sum=sum+3*2.7;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='B' && ch[i+1]=='-'){sum=sum+2*2.7;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='B' && ch[i+1]=='-'){sum=sum+1*2.7;count2=count2+1;}

    if( ch[i-1]=='3' && ch[i]=='B' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+3*3.0;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='B' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+2*3.0;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='B' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+1*3.0;count2=count2+1;}
    //
    if( ch[i-1]=='3' && ch[i]=='C' && ch[i+1]=='+'){sum=sum+3*2.3;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='C' && ch[i+1]=='+'){sum=sum+2*2.3;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='C' && ch[i+1]=='+'){sum=sum+1*2.3;count2=count2+1;}

    if( ch[i-1]=='3' && ch[i]=='C' && ch[i+1]=='-'){sum=sum+3*1.7;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='C' && ch[i+1]=='-'){sum=sum+2*1.7;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='C' && ch[i+1]=='-'){sum=sum+1*1.7;count2=count2+1;}

    if( ch[i-1]=='3' && ch[i]=='C' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+3*2.0;count2=count2+3;}
    if( ch[i-1]=='2' && ch[i]=='C' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+2*2.0;count2=count2+2;}
    if( ch[i-1]=='1' && ch[i]=='C' && ch[i+1]!='+' && ch[i+1]!='-' ){sum=sum+1*2.0;count2=count2+1;}

    if( ch[i-1]=='1' && ch[i]=='F'){count2=count2+1;}
    if( ch[i-1]=='2' && ch[i]=='F'){count2=count2+2;}
    if( ch[i-1]=='3' && ch[i]=='F'){count2=count2+3;}
}




GPA=sum/count2;
printf("%.2f",GPA);


/*
printf("\nSum:%.1f",sum);
printf("\nCount=:%d %1f",count2,GPA);
*/
}