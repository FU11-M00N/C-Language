#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
//���� �����Ҵ�
int main(void){
int n,i;
int* p;

printf("ó�� �� �������� ������? :");
scanf("%d",&n);

//p = (int*)malloc(sizeof(int)*n);
//p = (int*)calloc(n,sizeof(int));//���� �Ʒ��� ��������
		  
if(p==NULL){
	puts("�����Ҵ� ����");
}

printf("[%d] ���� �����Է�, \n",n);
for(i=0; i<n; i++){
printf("[%d]���� ���� : " ,i);
scanf("%d",p+i);
}

printf("\n [%d]�� ���� ���� ���\n",n);
for(i=0; i<n; i++){
printf("[%d] ==> %d \n", i, *(p+i));
}
free(p);
return 0;



}
