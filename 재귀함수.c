#include <stdio.h>

void function(int b);

void function(int b){
		printf("hi");
	printf(" b = %d, &b = %p \n",b,&b);
	if(b==0){
		
	puts("b�� 0�϶� if��.");
	
	return;
	}
	function(b-1);
	printf(" b! = %d, &b = %p \n",b,&b);

}

int main(){
	puts("�����Լ� ����");
	function(3);
	puts("���� �Լ� ����");
	return 0;
	
}
