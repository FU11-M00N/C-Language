#include<stdio.h>

void Bubble(int *arr,int n); //함수정의하기 

int main(){
	int arr[5];
	int i,n;
	n=sizeof(arr)/sizeof(int);
 
	printf("버블정렬 구현하기 - 포인터 \n\n");

	for(i=0; i<n; i++){
		printf("%d 번째 수 : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n정렬 전 : ");
	for(i=0; i<n; i++){
		printf("[%d]", arr[i]); //출력 
	}	
	Bubble(arr,n);
	printf("\n정렬 후 : "); 
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
