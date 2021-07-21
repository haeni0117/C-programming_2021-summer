//N x M (1≤N, M≤100) 크기의 행렬에 1 ~ MN 의 수를 아래 그림과 같이 나선형으로 채운 결과를 출력하시오.
#include <stdio.h>
#include <stlib.h>

int main(void){
  int n,m;
  printf("행렬의 크기를 입력하시오.");
  scanf("%d %d",&n,&m);
  int arr[n][m];//배열 선언
  int a=1;
  int up = 0, down = n-1, left=0,right=m-1; //위치값 지정 -> m-1이 현재 인덱스라면 가장 오른쪽에 와있다는 것이다. 
  while(left<=right && up<=down){
    for(int i = left;i<right;i++){
      arr[up][i] = a++;
      up++;//마지막에 up을 올려준다. num상으로는 올려주는 것이 맞지만, 사실 시각적으로는 내려오는 것이 맞다
      //맨 위의 행이 0번째 행이고, 차례대로 내려오면서 0번 -> 1번 -> 2번 ... 이런식으로 진행되니까
    }
    for(int j = up;j<=down;j++){
      arr[j][right]=a++;
      right--;//여기 부분이 좀 이해가 안간다....
    }
    for(int i = right; j>=left;j--){
      arr[down][i]=a++;
      left++;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        printf("%2d",arr[i][j]);
      }
      printf("\n");
    }
    return 0;
  }

}