//아래와 같은 2차원 배열을 생성하고, 각 행의 합계, 각 열의 합계를 구하는 프로그램을 작성하라. 
#include <stdio.h>
int main(void){
  int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,c1,c2,c3,c4,c5;
  printf("1행 숫자 입력");
  scanf("%d %d %d %d %d",a1,a2,a3,a4,a5);
  printf("2행 숫자 입력");
  scanf("%d %d %d %d %d",b1,b2,b3,b4,b5);
  printf("3행 숫자 입력");
  scanf("%d %d %d %d %d",c1,c2,c3,c4,c5);
  
  int arr[3][5]={
    {12,56,43,19,98},{99,56,34,41,3},{65,3,87,78,21};
  }
  int rowsum;
  for(int i=0;i<3;i++){
    rowsum = 0;
    for(int j=0;j<5;j++){
      rowsum +=arr[i][j]//각 칸에 들어있는 값을 더해주는 변수, rowsum
    }
    printf("%d\n",rowsum);
  }
  int colsum; //이번에는 열의 합을 구한다.
  for(int i=0;i<5;i++){
    colsum=0;
    for(int j=0;j<3;j++){
      colsum +=arr[i][j]
    }
    printf("%d\n",colsum);
  }
}
