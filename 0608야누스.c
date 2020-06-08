#include <stdio.h>

int main(){
	int n,i,j;
	
	printf("행 수 를 입력하시오.");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}	
		printf("\n");
	}
	
	
	return 0;
}
