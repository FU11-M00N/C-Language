#include <stdio.h>

int main(){
	int a;
	int i;
	float sum;
	printf("값 5개를 입력하시오.\n");
	for(i=1; i<=5; i++){
		scanf("%d",&a);
		sum+=a;
	}
	printf("%f",sum);
	return 0;
}
