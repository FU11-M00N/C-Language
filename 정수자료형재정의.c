#include <stdio.h>
// 정수자료형 재정의  
typedef signed char int8_t; // signed char를 int8_t 로 재정의한다. 
typedef unsigned char uint8_t; // unsigned char를 int8_t 로 재정의한다. 
typedef short int int16_t; // short int 를 int16_t 로 재정의한다. 
typedef unsigned short int uint16_t; // unsigned short를 int16_t 로 재정의한다. 
int main(){
	
	int8_t  a= 10;
	uint8_t b= 20;
	int16_t c= 30;
	uint16_t d= 40;
	
	printf("정수자료형을 typedef를 이용하여 재정의함.\n"); 
	
	printf("int8_t : %d\n",sizeof(a));  
	printf("uint8_t : %d\n",sizeof(b));
	printf("int16_t : %d\n",sizeof(c));
	printf("uint8_t : %d\n",sizeof(d));
	
	
	return 0;
}
