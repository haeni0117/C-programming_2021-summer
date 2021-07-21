//1. 크기가 N인 1차원 배열에 1 ~ 100 사이의 난수를 저장한 후, 최댓값과 최솟값을 구하는 프로그램을 작성하라. 최댓값과 최솟값을 구하는 부분은 사용자 정의 함수로 구현한다. 
#include <stdio.h>
#include <time.h>

int findmax(int n, int m){
  if(n>=m) return n;
  else return m;
}
int findmin(int n,int m){
  if(n>=m) return m;
  else return n;
}
int main(void){
  int n,arr[11],min,max=0;//변수 초기화
  scanf("%d",&n);//가장 처음 입력받는 값은 n이라는 변수에 저장
  srand(time(NULL));//계속 다른 난수 만들어주기 위해서 seed값을 time(NULL)로 지정해주었다.
for(int i=0;i<n;i++){
  arr[i]=rand()%100 + 1; //1~100까지의 난수 생성
}
min,max = arr[0];
for(int i=0;i<n;i++){
  max = findmax(max,arr[i]);
  min = findmax(max,arr[i]);
}
printf("\n%d\n%d\n",max,min);}