#include <stdio.h>
// �����ڷ��� ������  
typedef signed char int8_t; // signed char�� int8_t �� �������Ѵ�. 
typedef unsigned char uint8_t; // unsigned char�� int8_t �� �������Ѵ�. 
typedef short int int16_t; // short int �� int16_t �� �������Ѵ�. 
typedef unsigned short int uint16_t; // unsigned short�� int16_t �� �������Ѵ�. 
int main(){
	
	int8_t  a= 10;
	uint8_t b= 20;
	int16_t c= 30;
	uint16_t d= 40;
	
	printf("�����ڷ����� typedef�� �̿��Ͽ� ��������.\n"); 
	
	printf("int8_t : %d\n",sizeof(a));  
	printf("uint8_t : %d\n",sizeof(b));
	printf("int16_t : %d\n",sizeof(c));
	printf("uint8_t : %d\n",sizeof(d));
	
	
	return 0;
}
