#include <stdio.h>
#include <stdlib.h>
typedef struct node{	
	char name[20];
	int age;	
	struct node* next;
}node;
int menual();
node* show(node* p);	
node* append(node* p);
node* insert(node* p); 
node* deletion(node* p);
node* update(node* p);
void heapfree(node* p);

void heapfree(node* p){
	node* tmp =p;
	while(p!=NULL){
		tmp=p->next;
		free(p);
		p=tmp;
	}
	printf("종료되었습니다!\n");
}

node* update(node* p){
	int n,a;
	int i;
	show(p);
	printf("수정하실 노드의 번호를 입력하세요!\n");
	scanf("%d",&n);
	
	if(n==1){
	printf("수정하실 이름을 입력하세요!\n");
	scanf("%s",p->name);
	printf("수정하실 나이를 입력하세요!\n");
	scanf("%d",&p->age);
		
	}	
	else{
	for(i=1; i<n; i++){
	p=p->next;	
	}
	
	printf("수정하실 이름을 입력하세요!\n");
	scanf("%s",p->name);
	printf("수정하실 나이를 입력하세요!\n");
	scanf("%d",&p->age);
	
	}
	return p;
}
node* deletion(node* p){
	node* start=p;
	int i,n;
	node* tmp;
 
	printf("삭제 하실 번호를 입력하세요!!\n");
	scanf("%d",&n);
	
	if(n==1){
		start=p->next;
		free(p);
	}
	else{
		for(i=1; i<n-1; i++){
		p=p->next;
		}
		
		tmp=p->next;
		p->next=p->next->next;
		p=p->next;
		free(tmp);
	}
	return start;
}
node* insert(node* p){
	int pos,i;
	node* item=(node*)malloc(sizeof(node));
	node* start=p;
	show(p); 
	
	printf("삽입하실 번호를 입력하세요!!.");
	scanf("%d",&pos);
	printf("삽입 할 이름을 입력하세요. ");
	scanf("%s",item->name);
	printf("삽입 할 나이를 입력하세요.");
	scanf("%d",&item->age);
	
	if(pos==1){
	item->next=start;
	start=item;
	}
	else{	
	for(i=1; i<pos-1; i++){
	p=p->next;	
	}
	item->next=p->next;
	p->next=item;
	}
	return start;
}
node* show(node* p){
	int i=0;	
	while(p->next!=NULL){
	printf("[%d]번째 %s %d\n",++i,p->name,p->age);		
	p=p->next;		
	}
	return p;
}
node* append(node* p){
	
	printf("추가 할 이름을 입력하세요.\n");
	fflush(stdin);
	gets(p->name);
	printf("추가 할 나이를 입력하세요.\n");
	scanf("%d",&p->age);
	
	p->next=(node*)malloc(sizeof(node));
	p=p->next;						
	p->next=NULL;
	return p;										
}
int menual(){
	int n;

	printf("1.추가\n");
	printf("2.출력\n");
	printf("3.삽입\n");
	printf("4.삭제\n");
	printf("5.수정\n");
	printf("6.종료\n");
	
	scanf("%d",&n);
	return n;
}
int main(){ 
	node* tail,*head=(node*)malloc(sizeof(node));
	head->next=NULL;
	tail=head;	
	while(1){	
	switch(menual()){
		case 1 :
			tail=append(tail);	
			break;
		case 2 :
			show(head);
			break;	
		case 3 :
			head=insert(head);	
			break;
		case 4 :
			head=deletion(head);
			break;
		case 5 :
			update(head);
			break;
		case 6:
			heapfree(head);
			break;
	}
}

	return 0;
}
