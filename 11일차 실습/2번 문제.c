//문자열 안에 포함된 특정 문자의 수를 세는 함수를 만들고 테스트하라. 
//hello my name is leo를 입력받은 경우
//'e'가 몇 개 존재하냐를 output으로 받아온다.
#include <stdio.h>
#include <string.h>
#define SIZE 100;

void charcount(char s[], char c){
  //s:hello my name is leo
  //c: e -> count해줄 문자
  int count =0;
  for(int i=0;i<strlen(s);i++){
    if(s[i]==c){
      count++;
    }
  }
  printf("%d\n",count);
}
int main(void){
  char str[SIZE];
  char c;

  fgets(str,sizeof(str),stdin);//지정해놓은 사이즈를 초과할 수 없는 함수
  c = getchar();//char 입력받기->getchar()라는 함수가 있음
  charcount(str,c);//사용자지정함수
  return 0;
}