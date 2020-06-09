#include <stdio.h>

int main(){
	int n,i,j;
	printf("단 수 입력:");
	scanf("%d",&n);
	
	for(i=1; i<=9; i++){
	printf("%d * %d = %d",n,i,n*i);
	printf("\n");
	}
	
	
	return 0;
}
