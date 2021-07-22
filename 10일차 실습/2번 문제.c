//2. 10개의 임의의 수(1 ~ 100)를 저장하는 두 배열 A, B를 만드는 makeArray(int *A, int *B), 그리고 두 배열의 요소들의 합을 구하는 addArray(int *A, int *B, int *C) 함수를 작성하고 테스트하라. 
// 조건 : **함수 원형은 변경할 수 없다.** 
#include <stdio.h>
#define SIZE 100;

void makeArray(int *a, int *b){//포인터값을 파라미터로 가진다. 
  for(int i=0;i<SIZE;i++){
    a[i] = rand()%100 + 1;//1~100까지의 난수
    b[i] = rand()%100 + 1;//1~100까지의 난수
  }
}
void addArray(int *a, int *b, int *c){//배열을 포인터로 접근했다.
  for(int i=0;i<SIZE;i++){
    c[i] = a[i]+b[i];
  }
}
int main(void){
  srand(time(NULL));//seed를 시간으로 주고 난수생성!
  int a[SIZE]={0},b[SIZE]={0},c[SIZE]={0};//python이랑 다른 부분이니 유의하기! [1,2,3] 이런식으로 사용하지 않는다. 각각의 배열 a,b,c는 크기가 SIZE(=100)이고, 전부 0으로 초기화되어 있다. 
  makeArray(a,b);
  addArray(a,b,c);

  printf("a[]= ");
  for(int i=0;i<SIZE;i++){
    printf("[%d]",A[i]);

  }

}