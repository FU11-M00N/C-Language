#include <stdio.h>

int main(){
	int a;
	int c;
	
	printf("월요일\n");
	printf("화요일\n");
	printf("수요일\n");
	printf("목요일\n");
	printf("금요일\n");
	printf("토요일\n");
	printf("일요일\n");
	
	scanf("%d",&a);
	
	if(a==1 || a==3 || a==5 || a==7){
		printf("oh my god");
	}
	else{
		printf("enjoy");
	}
	
	return 0;
}
