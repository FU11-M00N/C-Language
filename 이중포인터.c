#include <stdio.h>

int main(){
	
	int a =100;
	int* p = &a;
	int** pp = &p;
	
	
	printf("a의 값 = %d &a 의 주소 값 =%p \n",a,&a);
	printf("p의 값  = %p &p 의 주소 값 = %p \n",p,&p);
	printf("pp의 값 = %p &pp의 주소 값 = %p \n",pp,&pp);
	
	printf("a = %d, *p %d, **pp = %d\n",a,*p,**pp);
	
	
	return 0;
} 


