//3. N (2 ≤ N ≤ 100) 개의 정수로 이루어진 수열 X를 “위치 바꿈 정보”에 의해 변환한 최종 결과를 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main(void){
  int n;
  printf("입력할 수열의 길이를 입력하시오!");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int chage;
  printf("주소 바꿈 정보 길이를 입력하시오.");
  scanf("%d",&change);
  int _arr[chage];
  for(int i=0;i<change;i++){
    scanf("%d",&_arr[i]);
  }
  int a;
  for(int i=0;i<=change;i++){
    a = arr[_arr[i+1]];
    arr[_arr[i+1]]=arr[arr_ch[0]];
    arr[_arr[0]]=a;
    //index가 계속 0인 이유? 첫번째 값을 결국 끝까지 가져감 중간중간에 계속 swap하다보면 마지막까지 남게 되어 있다.
  }
}