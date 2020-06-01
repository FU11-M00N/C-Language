#include <stdio.h>

int main(){
	
	int a;
	printf("값을 입력하시오!\n");
	scanf("%d",&a);

	if(a<0){
		a=a * -1;
	}
	
	printf("a 의 절대값 : %d\n",a);
	if(a%2==0){
	printf("짝수입니다.\n");
	}
	else{
		printf("홀수입니다.\n");
	}
	
	return 0;
	
	
}
