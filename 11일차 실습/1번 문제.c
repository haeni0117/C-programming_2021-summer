#include <stdio.h>
#include <string.h>
#define SIZE 100

void delete_space(char s[]){
  int index =0;
  for(int i = 0;i<strlen(s);i++){
    if(s[i]!=' '){//s의 i번째 요소가 공백(' ')이 아니라면
      s[index] = s[i];
      index ++;
      //공백이 없는 요소들로만 재배열했기 때문에 -> 공백이 없어진다.
    }
    s[index]=0;
  }
}
int main(void){
  char str[SIZE];
  fgets(str,sizeof(str),stdin);//입력되는 문자열의 크기가 배열의 크기를 넘지 못한다. -> 문자열의 크기를 지정해버린 것이다.
  delete_space(str);//공백을 지정하는 사용자지정함수 
  printf("%s\n",str);//공백이 없어진 변수 str를 출력하라
  return 0;
}