#include <stdio.h>

int main(){
	
	int a =100;
	int* p = &a;
	int** pp = &p;
	
	
	printf("a�� �� = %d &a �� �ּ� �� =%p \n",a,&a);
	printf("p�� ��  = %p &p �� �ּ� �� = %p \n",p,&p);
	printf("pp�� �� = %p &pp�� �ּ� �� = %p \n",pp,&pp);
	
	printf("a = %d, *p %d, **pp = %d\n",a,*p,**pp);
	
	
	return 0;
} 


