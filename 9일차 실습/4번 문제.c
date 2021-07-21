//N x N (1≤N≤100) 크기의 행렬에 1 ~ N² 의 수를 아래 그림과 같이 차례로 위에서부터 → 방향과 ← 방향을 번갈아 가면서 채운 결과를 출력하시오
//지그재그 방식으로 채운 후 결과 출력
#include <stdio.h>
#include<stdlib.h>

int main(void){
  int n =0;
  printf("행렬크기를 입력하시오 : ");
  scanf("%d",&n);//입력하는 정수가 변수 n에 저장된다.
  int arr[n][n];
  int a =0;
  for(int i=0;i<n;i++){
    if(i%2==0)//짝수라면?
    {
      for(int j=0;j<n;j++){
        arr[i][j]=a+1;
      }
    }
    else{//홀수일때
      for(int j=n-1;j>=0;j--){
        arr[i][j]=a+1;
        a++;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        printf("%2d",arr[i][j]);
      }
      printf("\n");
    }
    return 0;
    }
  }
}