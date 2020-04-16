#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
//���Ḯ��Ʈ 
typedef struct bhc{ //�̸��̶� ���̸� ������ ���ܸ���Ʈ 
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
	printf("����Ǿ����ϴ�!\n");
}
bhc* update(bhc* p){ 
	int i,pos;
	printf("�����Ͻ� ����� ��ȣ�� ���ÿ�.\n");
	i=print(p);
	scanf("%d",&pos);
	
	if(pos==1){
		printf("�����Ͻ� �̸��� �Է��ϼ���.\n");
		scanf("%s",&p->name);
		printf("�����Ͻ� ���̸� �Է��ϼ���.\n");
		scanf("%d",&p->age);
		printf("������ �Ϸ�Ǿ����ϴ�!\n");
	}
	else{
		for(i=1; i<=pos-1; i++){
			p=p->next;
		}
		printf("�����Ͻ� �̸��� �Է��ϼ���.\n");
		scanf("%s",&p->name);
		printf("�����Ͻ� ���̸� �Է��ϼ���.\n");
		scanf("%d",&p->age);
		printf("������ �Ϸ�Ǿ����ϴ�!\n");
	}
}
	
bhc* deletion(bhc* p){
	int pos,i;
	bhc* start=p;
	bhc* tmp;
	printf("�����Ͻ� ����� ��ȣ�� ���ÿ�.\n");
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
	printf("������ ����� ��ȣ�� ���ÿ�.\n");
	scanf("%d",&pos);
	printf("�̸��� �Է��ϼ���\n");
	scanf("%s",&item->name);
	printf("���̸� �Է��ϼ���\n");
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
	// ����� print �Լ������ؾ��ϰ� print�Լ��� �˰��ִ°� head����  
	while(p->next!=NULL){
	printf("����:%d �̸� : %s  ����: %d\n",i++,p->name,p->age); 
	p=p->next;
	} 
	return i;
}

bhc* append(bhc* p){
	printf("�̸��� �Է����ּ��� \n");
	scanf("%s",&p->name);
	printf("���̸��Է����ּ���\n");
	scanf("%d",&p->age);
	p->next=(bhc*)malloc(sizeof(bhc));
	p=p->next;
	p->next=NULL;
	return p;
}
int main(){ //head�� tail�� �������ߵ� ������ �����Ҵ����� ����ž� 
	bhc* tail , *head=(bhc*)malloc(sizeof(bhc));
	head->next=NULL;
	tail=head;
	int n;
	int i;
	while(1){
		printf("���Ḯ��Ʈ�Դϴ�.��ȣ�� �������ּ���\n");
		printf("1.�߰�\n2.���\n3.����\n4.����\n5.����\n6.����\n");
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
			printf("���� ������ �Դϴ�!\n");
		}
	}
	return 0;
}
