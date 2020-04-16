#include<stdio.h>
#include<string.h>
void Input_String(char(*x_)[10],int number_);
void Output_String(char(*x_)[10],int number_,char *msg_);
void Sort_String(char(*x_)[10],int number_);

int main(void){

char city[5][10];
char(*p)[10]=city;
int n=sizeof(city)/sizeof(char[10]);

Input_String(city,n);
Sort_String(city,n);

return 0;
}

void Input_String(char(*x_)[10],int number_){
int i;

printf("[%d]개의 도시명 입력 \n",number_);
for(i=0; i<number_;i++){
	printf("[%d]번 째 도시 :",i);
	gets(*(x_+i));
}

Output_String(x_,number_,"\n원본 출력 ");
}
void Output_String(char(*x_)[10],int number_,char*msg_){
int i;
puts(msg_);
for(i=0; i<number_; i++)
printf("city[%d]=%s\n",i,*(x_+i));
}

void Sort_String(char(*x_)[10],int number_){
int i,j;
char tmp[10];
	for(i=0;i<number_-1;i++){
		for(j=0;j<number_-i-1;j++){
			if(strcmp(*(x_+j),*(x_+j+1))>0){
			strcpy(tmp,*(x_+j));
			strcpy(*(x_+j),*(x_+j+1));
			strcpy(*(x_+j+1),tmp);
			}
		}
	}	
Output_String(x_,number_,"\n정렬 후 ");
}
