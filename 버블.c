#include<stdio.h>

void Bubble(int *arr,int n); //�Լ������ϱ� 

int main(){
	int arr[5];
	int i,n;
	n=sizeof(arr)/sizeof(int);
 
	printf("�������� �����ϱ� - ������ \n\n");

	for(i=0; i<n; i++){
		printf("%d ��° �� : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n���� �� : ");
	for(i=0; i<n; i++){
		printf("[%d]", arr[i]); //��� 
	}	
	Bubble(arr,n);
	printf("\n���� �� : "); 
	for(i=0; i<n; i++){
		printf("[%d]",arr[i]);
	}
	return 0;
}

void Bubble(int *arr,int n){ 
	int i,j,temp;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(*(arr+j)>*(arr+j+1)){
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1)= temp;
			}
		}
	}
	
}
