#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main(void) 
{ 
   int n,i,j,cnt=0;
   scanf("%d",&n);
   int matrix[n][n];
   for(i=1;i<=n;i++){
     printf("%d ",i);
     printf("\n");
    for(j=0;j<n;j++){ 
          cnt++;
          matrix[i][j]=cnt;
          if(i%2==1){
            printf("%d ",cnt);
          }
          else{
            pritnf
          }
         
          //printf("%d ",cnt);
     }}
     if(i%2==0){
       printf("%d",i);
       for(j=n;j>0;j++){ 
          cnt++;
          matrix[i][j]=cnt;
          //printf("%d ",cnt);
     }
     
     }
   }
   
   
   
   
   
   return 0;}
