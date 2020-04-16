#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
//연결리스트 
typedef struct bhc{ //이름이랑 나이를 저장할 연겨리스트 
	char name[20]; 
	int age;  
	struct bhc* next; 
}bhc;

int print();
bhc* append(bhc* p);
bhc* insert(bhc* p);
bhc* deletion(bhc* p);
bhc* update(bhc* p);
void close(bhc* p);
void close(bhc* p){
	bhc* tmp = p;
	while(p!=NULL){
		tmp=p->next;
		free(p);
		p=tmp;
	}
	printf("종료되었습니다!\n");
}
bhc* update(bhc* p){ 
	int i,pos;
	printf("수정하실 노드의 번호를 고르시오.\n");
	i=print(p);
	scanf("%d",&pos);
	
	if(pos==1){
		printf("변경하실 이름을 입력하세요.\n");
		scanf("%s",&p->name);
		printf("변경하실 나이를 입력하세요.\n");
		scanf("%d",&p->age);
		printf("변경이 완료되었습니다!\n");
	}
	else{
		for(i=1; i<=pos-1; i++){
			p=p->next;
		}
		printf("변경하실 이름을 입력하세요.\n");
		scanf("%s",&p->name);
		printf("변경하실 나이를 입력하세요.\n");
		scanf("%d",&p->age);
		printf("변경이 완료되었습니다!\n");
	}
}
	
bhc* deletion(bhc* p){
	int pos,i;
	bhc* start=p;
	bhc* tmp;
	printf("삭제하실 노드의 번호를 고르시오.\n");
	i=print(p); 
	scanf("%d",&pos);
	
	if(pos==1){
	start=p->next;
	free(p);
	}
	else{
	for(i=1; i<pos-1; i++){
		p=p->next;
		}
		tmp=p->next;
		free(tmp);
		p->next=p->next->next;
	}
	return start;
}
bhc* insert(bhc* p){
	int i,pos;
	int a;	
	bhc* item=(bhc*)malloc(sizeof(bhc));
	bhc* start=p;
	a=print(p);
	printf("삽입할 노드의 번호를 고르시오.\n");
	scanf("%d",&pos);
	printf("이름을 입력하세요\n");
	scanf("%s",&item->name);
	printf("나이를 입력하세요\n");
	scanf("%d",&item->age);
	if(pos==1){
	item->next=p;
	start=item;
	}
	else{
		for(i=1; i<pos-1; i++){
			p=p->next; 
			free(p);
		}
	item->next=p->next;
	p->next= item;
	} 
	return start;
}
int print(bhc* p){

	int num;
	int i=1;
	// 출력을 print 함수에서해야하고 print함수가 알고있는건 head값뿐  
	while(p->next!=NULL){
	printf("순서:%d 이름 : %s  나이: %d\n",i++,p->name,p->age); 
	p=p->next;
	} 
	return i;
}

bhc* append(bhc* p){
	printf("이름을 입력해주세여 \n");
	scanf("%s",&p->name);
	printf("나이를입력해주세여\n");
	scanf("%d",&p->age);
	p->next=(bhc*)malloc(sizeof(bhc));
	p=p->next;
	p->next=NULL;
	return p;
}
int main(){ //head랑 tail를 만들어줘야돼 ㅇ리는 동적할당으로 만들거야 
	bhc* tail , *head=(bhc*)malloc(sizeof(bhc));
	head->next=NULL;
	tail=head;
	int n;
	int i;
	while(1){
		printf("연결리스트입니다.번호를 선택해주세여\n");
		printf("1.추가\n2.출력\n3.삽입\n4.삭제\n5.수정\n6.종료\n");
		scanf("%d",&n);
		switch(n){
			case 1:
			tail=append(tail);
			break;
			case 2:
			i=print(head);
			break;
			case 3:
			head=insert(head);
			break;
			case 4:
			head=deletion(head);
			break;
			case 5:
			update(head);
			break;
			case 6:
			close(head);
			break;
			default:
			printf("없는 선택지 입니다!\n");
		}
	}
	return 0;
}
