//. 두 정수를 입력받아 최대 공약수와 최소 공배수를 반환하는 함수를 작성하고 테스트하라. 단, 두 정수는 main()에서 입력받고 사용자 정의 함수에서 두 정수를 전달받아 LCM과 GCD를 계산한다.
//최대공약수와 최소공배수
#include <stdio.h>
#include <stdlib.h>

void GCD(int a,int b, int *gcd){
  while(*gcd!=1){//최대공약수가 1이 아니다. 
    if(a>b){//a가 b보다 클 때
      if(a%b==0){//나누어 떨어질 때 : 나머지=0
        break;
      }
      *gcd = a%b;
      a=b;
      b=*gcd;
    }
    else{
      if(b%a==0){
        break;//나머지가 0이면 break로 while문 빠져나갈 수 있다.
      }
      *gcd = b%a; //나머지
      b = a; //큰 수에 작은 수를 대입한다.
      a = *gcd; //작은 수에는 나머지를 대입한다. 
    }
  }
}
void LCM(int a,int b,int *lcm){
  int i=2,j=2; //정수형 i,j변수 초기화
  int va =a ,vb = b;

  while(a!=b){
    if(a<b){
      *lcm = b;
      a = va*i++;
    }
  }
}