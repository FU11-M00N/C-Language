// 

#include <stdio.h>
void bubble(int number,int *p){  
	int tmp;
	int i,j,k;
	for(i=0; i<=number; i++){
		for(j=0; j<number; j++){
			if(*(p+j)> *(p+j+1)){
			tmp=*(p+j);
			*(p+j)= *(p+j+1);
			*(p+j+1)=tmp;
			
			
		}		
	}
}
	for(k=0; k<number; k++){
			printf("%d",*(p+k));
		}
	
}
int main(){
	
	int arr[6]={};
	int num=sizeof(arr)/sizeof(int);
	int i;
	printf("입력하세요 \n");
	for(i=0; i<num; i++){
	scanf("%d",&arr[i]);	
	}
	
	bubble(num,arr);
	
	

return 0;
}

