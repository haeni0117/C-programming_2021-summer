#include <stdio.h>
#include <stdlib.h>

void sum(int *a, int *b){
  printf("%d",*a + *b); //a와 b의 값에 접근하는 것 -> 말그대로 화살표라는 의미의 pointer!
}
void sub(int *a, int *b){
  printf("%d ".*);
}
int main(void){
  int a,b;
  printf("두 정수를 입력하세요");
  scanf("%d %d",&a,&b);

  sum(&a,&b); //포인터를 통해 값을 받아온다 -> 그 값들을 더해준다. 왜냐하면 간접참조를 통해 값을 들고왔기 때문이다.
  sub(&a,&b); //sum과 같은 원리
  return 0; //int형이었으니까!

}