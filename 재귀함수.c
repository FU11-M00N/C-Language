#include <stdio.h>

void function(int b);

void function(int b){
		printf("hi");
	printf(" b = %d, &b = %p \n",b,&b);
	if(b==0){
		
	puts("b가 0일때 if문.");
	
	return;
	}
	function(b-1);
	printf(" b! = %d, &b = %p \n",b,&b);

}

int main(){
	puts("메인함수 시작");
	function(3);
	puts("메인 함수 종료");
	return 0;
	
}
