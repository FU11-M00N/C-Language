//���̹���ŷ���Ȱ� 2019202147������ 2019/6.24 
//����޷� C��� ���� 
#include <stdio.h>

int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31}; // mon�迭�� �� ������ ������ ���� �־��ִ� �迭 ���� 
char* yoil[7]={"��", "��", "ȭ", "��", "��", "��", "��"};// yoil�迭�� ��~�� �� �־��ִ� �迭 ���� 
void selection1(); // ù��° ������ �ҷ����� �Լ� 
void selection2(); // �ι�° ������ �ҷ����� �Լ� 
void selection3(); // ����° ������ �ҷ����� �Լ� 
 
int yunyear();

int main(){
	int choice;
	
	while(1){
		printf("(1) ���ϴ� ���� �޷� ���\n(2) ���ϴ� �Ѵ� �޷� ���\n(3) ���ϴ� 1��ġ �޷� ���\n(4) ����\n");	
		scanf("%d",&choice);

		switch(choice){
		case 1: selection1(); // 1�����Է½� ù��° ���� �Լ� ȣ�� 
		break;
		case 2: selection2(); // 2�����Է½� �ι�° ���� �Լ� ȣ�� 
		break;	
		case 3: selection3(); // 3�����Է½� ����° ���� �Լ� ȣ�� 
		break;
		case 4: printf("�޷��� �����մϴ�.");// 4���� �Է½� ���� 
		
		return 0;
		
		default: printf("1~4�� ��ȣ�� �Է��Ͻÿ�.\n\n"); // 1~4�� ���� �ȿ��� �ٽ� �Է��϶�� ��� 
		
		break;  
		}
	}

}
void selection1(void) {
	int present,total=0;
	int year,month,day,past,i;

	printf("��,��,���� �Է��ϼ���.(��: 2019.05.30) 2019.05.30 ?\n");
	scanf("%d %d %d",&year,&month,&day); // ��,��,�� �Է� 
	
	leapyear(year);// ������ ������ִ� �Լ� ȣ�� 
	
	past=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400;  // 1.1.1~ �Է¹��� �⵵�� ���⵵ �������� ���� past�� ���� 
	
	for(i=0,present=0; i<month-1; i++){ //  �Է¹��� month�� -1 �� �ݺ��ϸ�  �迭���� �°� ���ش� 
      present+=mon[i];  //  ���� present�� ���� 
   }
   
   
   
   total=past+present+day; // ���⵵�������հ� ���� ����  day�� total�� �־��ش� 

	printf("%d��,%d��,%d����%s ���� �Դϴ�! \n",year,month,day, yoil[total%7]); //��� 
	
}

void selection2()
{   
   int year,month,present=0,total,blank,past,ill=1, test;
   int i,j=0;
   int monn[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   
   printf("���� ���� �⵵�� ���� �Է��Ͻÿ�. EX:) 2019 06\n");
   scanf("%d  %d",&year,&month); 
   past=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400 ; //1.1.1~ �Է¹��� �⵵�� ���⵵ �������� ���� past�� ���� 
   leapyear(year);// ������ ������ִ� �Լ� ȣ�� 
   
   for(i=0;i<7;i++){ // ���� 7���� ��� 
      printf("%6s",yoil[i]);
      
   }
   printf("\n ��������������������������������������������\n");
   
   for(i=0;i<month-1;i++){ // �Է¹��� month�� -1 �� �ݺ��ϸ�  �迭���� �°� ���ش�  
   
      present+=monn[i];  // present�� �־��ش� 
   }
   total= past+present; // ���⵵�� ������ �հ� ���簪��  total�� �־��ش� 
   blank= total%7+1;
     test=blank; // ������ ���ϱ����� total���� ���������� ���Ѵ� 
  for(i=0;i<=6;i++){ // i�� �� j�� ���� �ǹ��Ѵ� 
   
      for(j=0; j<7; j++,ill++){
    
         if(blank>0) { // ��Ż�� ������7�� ������ ���鰪�� 0����ũ�ٸ�  �Ʒ� �ݺ������� �̵� 
               printf("      ");
               blank--;
            }
		 else
		 {
	         printf("%6d",ill-test); // ill�� ��� 
	    	
			 if(j==6){ // �� ���� 6�̵ȴٸ� �ٹٲ�  
	            printf("\n");
	         }
	         if(ill>=mon[month-1]){ 	 // ill�� mon�� �迭 ������ ũ�ų����ٸ� �ݺ����� ������ 
	         	break;
			 }
     	}
      }
      printf("\n"); 
	  if(ill>=mon[month-1]){ 	 // �ݺ����� �Ѱ� �������� �ϳ��� ����̵Ǵϱ� �ݺ����� ������ 
	  	break;  
	  }
         
   }   
      printf("\n ��������������������������������������������\n");
} 


void selection3(void) //1�� �޷� ��ü�� ����Ѵ�. 
{
   
   char* dal[12]={"1��", "2��", "3��", "4��", "5��", "6��", "7��", "8��", "9��", "10��","11��", "12��"};
   int total, yoil;
   int month=1,day=1;
   char cal[12][6][7];
   int year,past,present,blank;
   int i=0,j,k=0;
   printf("���� ���� �⵵�� �Է��Ͻÿ�. EX:) 2001\n");
   scanf("%d",&year);
   past=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400 ;   // 1.1.1~ �Է¹��� �⵵�� ���⵵ �������� ���� past�� ����
   leapyear(year); // ������ �����ִ� �Լ� ȣ�� 
   
for(i=0; i<12; i++){ // i�� ���� �ǹ��ϹǷ� 12���� �ݺ� 
   
      for(j=0,i,present=0; j<i;j++){
      
         present+=mon[j]; 
      }
      total=past+present+1; // ���⵵�������հ� ���� ���� +1�Ͽ� ��Ż�� �ִ´� 
      blank=total%7; // ó�������ϴ� ���鰪�� ���ϱ����� ��Ż���� ������ 7�� ���������� ��ũ�� �ִ´� 
      day = 1; // �ѹ� �ݺ��ϰ� day�� 1�� �ʱ�ȭ�����ش� 
      
      if(blank != 0){ // ��ũ�� ���� 0�̾ƴϸ� �Ʒ� �ݺ��� ���� �̵� 
         for(k=0; k<blank; k++){ // ���ۿ��ϱ��� 32�� �־��ش�(�ƽ�Ű�ڵ� 32��=����) 
            cal[i][0][k]=32;
        
         }   
      }
      for(k=blank; k<7; k++){ // �޸��� day�� 1�� ���� ��Ų�� 
         cal[i][0][k]=day++;
         
      }
      for(j=1; j<6; j++){ // ���� ���� �ݺ����ش� 
      
         for(k=0; k<7; k++){// ���� ���õ� �ݺ����̴�. 
         
            if(day>mon[i]){ // ��¥�� ���� �������� �����ϸ� ������ �־��� �ƽ�Ű�ڵ尪 32�� �ִ´� 
               cal[i][j][k]=32;
               
            }
            else{ // �ƴ϶�� day�� 1�������ش� 
               cal[i][j][k]=day++;
            }   
         }
      }
   }


   for(i=0; i<12; i+=3){ // ���� 3���� ����Ͽ� 12���� ���� �������Ѵ� 
   
      printf("\t%8s\t", dal[i]); // �޷��� ���ε��� ���߱������̴� 
	  printf("\t\t%8s", dal[i+1]);
      printf("\t\t\t%8s\t\n", dal[i+2]);
      printf(" ��  ��  ȭ  ��  ��  ��  ��");
	  printf("\t ��  ��  ȭ  ��  ��  ��  ��");
	  printf("\t ��  ��  ȭ  ��  ��  ��  ��\n");
      printf(" �ڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
	  printf("\t �ڡڡڡڡڡڡڡڡڡڡڡڡڡ�\t");
      printf(" �ڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");// ������� �޷��� ������ ���߱� �����̴� 

      for(j=0; j<6; j++){ // j�� 6���� �ݺ��Ѵ� 
      
         for(k=0; k<7; k++){ // k��  7���� �ݺ��Ѵ� 
         
            if(cal[i][j][k]==32){ // �迭�� �ƽ�Ű�ڵ尪 32�� ������ ����� c���Ͽ� ������ ����Ѵ� 
            
               printf("%3c ", 32);
            }
            else // �ƴ϶�� �׳� ����Ѵ� 
               printf("%3d ", cal[i][j][k]);
         }
         printf("\t"); 
         
         for(k=0; k<7; k++){ 
        
            if(cal[i+1][j][k]==32){ // ������ �޷µ� ���� ���� ���ش�  
               printf("%3c ", 32);
               
            }
            else
               printf("%3d ", cal[i+1][j][k]);
         }
         printf("\t"); //tab ���
         for(k=0; k<7; k++){ 
         
            if(cal[i+2][j][k]==32){ // ������ �޷µ� ���� ���� ���ش� 
            
               printf("%3c ", 32);
            }
            else
               printf("%3d ", cal[i+2][j][k]);
         }
         printf("\t"); 
		 
         printf("\n");
      }
      printf("\n"); 
   } 
}
int leapyear(year) { // ������ ������ִ� �Լ��̴� 
	if(year%4==0){ // �⿡ 4�� ���� ���������� 0�̸� mon�迭��ù��°��  29�� �ִ´� 
		mon[1]=29;
		
    	if(year%100==0){ // �⿡ 100������ ���������� 0�̸� mon�迭�� ù������  29�� �ִ´� 
			mon[1]=28;
			
			if(year%400==0){ //�⿡ 400�� ���� ���������� 0�̸� mon�迭 ù��° 29�� �ִ´� 
				mon[1]=29;
				
			}    
		}
   } 
   else{
   	mon[1]=28;
   }
 	return mon[1];
}	

