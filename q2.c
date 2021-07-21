#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main(void) 
{ 
   int num[3][5]={{12, 56, 32, 16, 98}, {99, 56, 34, 41, 3},{ 65, 3, 87, 78, 21}}; 
   int i,j=0;
   int sum1,sum2=0;//sum1 : 세로 sum2:가로
    
   for(i=0; i<3; i++) 
   { 
     sum2=0;//초기화
       for(j=0; j<5; j++) 
       { 
           sum2 += num[i][j];
       } 
       printf("%d ", sum2); 
  }
  printf("\n"); 
  for(i=0;i<5;i++){
    sum1=0;
    for(j=0;j<3;j++){
      sum1 += num[j][i];
      }
      printf("%d ", sum1); 
      
  }return 0;}
