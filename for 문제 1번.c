#include <stdio.h>

int main(){
	int a;
	int i;
	float sum;
	printf("�� 5���� �Է��Ͻÿ�.\n");
	for(i=1; i<=5; i++){
		scanf("%d",&a);
		sum+=a;
	}
	printf("%f",sum);
	return 0;
}
