#include <stdio.h>

int main(){
	
	int a;
	printf("���� �Է��Ͻÿ�!\n");
	scanf("%d",&a);

	if(a<0){
		a=a * -1;
	}
	
	printf("a �� ���밪 : %d\n",a);
	if(a%2==0){
	printf("¦���Դϴ�.\n");
	}
	else{
		printf("Ȧ���Դϴ�.\n");
	}
	
	return 0;
	
	
}
