#include <stdio.h>

int main(){
	
	int a = 1;
	int b = 2;
	int c = 3;
	unsigned int d = 3;
	
	
	printf("---------------------------------------------\n");
	printf("and or xor 연산\n\n");
	printf("0x%08x | 0x%08x = 0x%08x\n",a,b, a|b);
	printf("0x%08x & 0x%08x = 0x%08x\n",a,b, a&b);
	printf("0x%08x ^ 0x%08x = 0x%08x\n",a,b, a^b);
	printf("~0x%08x = 0x%08x\n",a,~a);
	printf("---------------------------------------------\n");	
	printf("signed 비트 연산\n\n");	
	printf("signed int : 0x%08x >> 1 = 0x%08x\n",c,c >> 1);
	printf("signed int : 0x%08x << 1 = 0x%08x\n",c,c << 1);
	printf("signed int : 0x%08x >> 1 = 0x%08x\n",~c,~c >> 1);
	printf("---------------------------------------------\n");	
	printf("unsigned 비트 연산\n\n");	
	printf("unsigned int : 0x%08x >> 1 = 0x%08x\n",d,d >> 1);
	printf("unsigned int : 0x%08x << 1 = 0x%08x\n",d,d << 1);
	printf("unsigned int : 0x%08x >> 1 = 0x%08x\n",~d,~d >> 1);
				
	return 0;
}
