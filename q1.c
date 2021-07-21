#include <stdio.h>
#include <math.h>

int main(void){
	int list[10];
  int max=0;
  int min=100;
  int i;
	for (i = 0;i<10;i++) {
    list[i]=rand()%100+1;
		if(list[i]< min) min=list[i];
		if(list[i]>max)	max=list[i];
	}


	printf("%d\n", max);
	printf("%d\n", min);

	return 0;

}
