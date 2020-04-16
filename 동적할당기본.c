#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
//정수 동적할당
int main(void){
int n,i;
int* p;

printf("처리 할 데이터의 개수는? :");
scanf("%d",&n);

//p = (int*)malloc(sizeof(int)*n);
//p = (int*)calloc(n,sizeof(int));//위와 아래는 같은문장
		  
if(p==NULL){
	puts("동적할당 실패");
}

printf("[%d] 개의 정수입력, \n",n);
for(i=0; i<n; i++){
printf("[%d]번쨰 정수 : " ,i);
scanf("%d",p+i);
}

printf("\n [%d]개 정수 원본 출력\n",n);
for(i=0; i<n; i++){
printf("[%d] ==> %d \n", i, *(p+i));
}
free(p);
return 0;



}
