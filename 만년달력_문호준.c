//사이버해킹보안과 2019202147정하은 2019/6.24 
//만년달력 C언어 과제 
#include <stdio.h>

int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31}; // mon배열에 각 월들의 마지막 일을 넣어주는 배열 선언 
char* yoil[7]={"일", "월", "화", "수", "목", "금", "토"};// yoil배열에 일~토 를 넣어주는 배열 선언 
void selection1(); // 첫번째 조건을 불러오는 함수 
void selection2(); // 두번째 조건을 불러오는 함수 
void selection3(); // 세번째 조건을 불러오는 함수 
 
int yunyear();

int main(){
	int choice;
	
	while(1){
		printf("(1) 원하는 요일 달력 출력\n(2) 원하는 한달 달력 출력\n(3) 원하는 1년치 달력 출력\n(4) 종료\n");	
		scanf("%d",&choice);

		switch(choice){
		case 1: selection1(); // 1번을입력시 첫번째 조건 함수 호출 
		break;
		case 2: selection2(); // 2번을입력시 두번째 조건 함수 호출 
		break;	
		case 3: selection3(); // 3번을입력시 세번째 조건 함수 호출 
		break;
		case 4: printf("달력을 종료합니다.");// 4번을 입력시 종료 
		
		return 0;
		
		default: printf("1~4중 번호를 입력하시오.\n\n"); // 1~4번 값이 안오면 다시 입력하라고 출력 
		
		break;  
		}
	}

}
void selection1(void) {
	int present,total=0;
	int year,month,day,past,i;

	printf("년,월,일을 입력하세요.(예: 2019.05.30) 2019.05.30 ?\n");
	scanf("%d %d %d",&year,&month,&day); // 년,월,일 입력 
	
	leapyear(year);// 윤년을 계산해주는 함수 호출 
	
	past=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400;  // 1.1.1~ 입력받은 년도의 전년도 값까지의 합을 past에 저장 
	
	for(i=0,present=0; i<month-1; i++){ //  입력받은 month를 -1 를 반복하며  배열값과 맞게 해준다 
      present+=mon[i];  //  값을 present에 저장 
   }
   
   
   
   total=past+present+day; // 전년도까지의합과 현재 값과  day를 total에 넣어준다 

	printf("%d년,%d월,%d일은%s 요일 입니다! \n",year,month,day, yoil[total%7]); //출력 
	
}

void selection2()
{   
   int year,month,present=0,total,blank,past,ill=1, test;
   int i,j=0;
   int monn[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   
   printf("보고 싶은 년도의 월을 입력하시오. EX:) 2019 06\n");
   scanf("%d  %d",&year,&month); 
   past=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400 ; //1.1.1~ 입력받은 년도의 전년도 값까지의 합을 past에 저장 
   leapyear(year);// 윤년을 계산해주는 함수 호출 
   
   for(i=0;i<7;i++){ // 요일 7개를 출력 
      printf("%6s",yoil[i]);
      
   }
   printf("\n ♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥\n");
   
   for(i=0;i<month-1;i++){ // 입력받은 month를 -1 를 반복하며  배열값과 맞게 해준다  
   
      present+=monn[i];  // present에 넣어준다 
   }
   total= past+present; // 전년도의 까지의 합과 현재값을  total에 넣어준다 
   blank= total%7+1;
     test=blank; // 공백을 구하기위해 total값의 나머지값을 구한다 
  for(i=0;i<=6;i++){ // i는 행 j는 열을 의미한다 
   
      for(j=0; j<7; j++,ill++){
    
         if(blank>0) { // 토탈값 나누기7의 나머지 공백값이 0보다크다면  아래 반복문으로 이동 
               printf("      ");
               blank--;
            }
		 else
		 {
	         printf("%6d",ill-test); // ill값 출력 
	    	
			 if(j==6){ // 열 값이 6이된다면 줄바꿈  
	            printf("\n");
	         }
	         if(ill>=mon[month-1]){ 	 // ill이 mon의 배열 수보다 크거나같다면 반복문을 나간다 
	         	break;
			 }
     	}
      }
      printf("\n"); 
	  if(ill>=mon[month-1]){ 	 // 반복문이 한개 더있으면 하나더 출력이되니까 반복문을 나간다 
	  	break;  
	  }
         
   }   
      printf("\n ♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥\n");
} 


void selection3(void) //1년 달력 전체를 출력한다. 
{
   
   char* dal[12]={"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월","11월", "12월"};
   int total, yoil;
   int month=1,day=1;
   char cal[12][6][7];
   int year,past,present,blank;
   int i=0,j,k=0;
   printf("보고 싶은 년도를 입력하시오. EX:) 2001\n");
   scanf("%d",&year);
   past=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400 ;   // 1.1.1~ 입력받은 년도의 전년도 값까지의 합을 past에 저장
   leapyear(year); // 윤년을 구해주는 함수 호출 
   
for(i=0; i<12; i++){ // i가 달을 의미하므로 12까지 반복 
   
      for(j=0,i,present=0; j<i;j++){
      
         present+=mon[j]; 
      }
      total=past+present+1; // 전년도까지의합과 현재 값을 +1하여 토탈에 넣는다 
      blank=total%7; // 처음시작하는 공백값을 구하기위해 토탈값의 나누기 7의 나머지값을 블랭크에 넣는다 
      day = 1; // 한번 반복하고 day를 1로 초기화를해준다 
      
      if(blank != 0){ // 블랭크의 값이 0이아니면 아래 반복문 으로 이동 
         for(k=0; k<blank; k++){ // 시작요일까지 32를 넣어준다(아스키코드 32번=공백) 
            cal[i][0][k]=32;
        
         }   
      }
      for(k=blank; k<7; k++){ // 달마다 day에 1씩 증가 시킨다 
         cal[i][0][k]=day++;
         
      }
      for(j=1; j<6; j++){ // 달의 행을 반복해준다 
      
         for(k=0; k<7; k++){// 열과 관련된 반복문이다. 
         
            if(day>mon[i]){ // 날짜가 달의 마지막을 오버하면 공백을 넣어줄 아스키코드값 32를 넣는다 
               cal[i][j][k]=32;
               
            }
            else{ // 아니라면 day를 1씩더해준다 
               cal[i][j][k]=day++;
            }   
         }
      }
   }


   for(i=0; i<12; i+=3){ // 달을 3개씩 출력하여 12개의 달이 나오게한다 
   
      printf("\t%8s\t", dal[i]); // 달력의 라인들을 맞추기위함이다 
	  printf("\t\t%8s", dal[i+1]);
      printf("\t\t\t%8s\t\n", dal[i+2]);
      printf(" 일  월  화  수  목  금  토");
	  printf("\t 일  월  화  수  목  금  토");
	  printf("\t 일  월  화  수  목  금  토\n");
      printf(" ★★★★★★★★★★★★★★");
	  printf("\t ★★★★★★★★★★★★★★\t");
      printf(" ★★★★★★★★★★★★★★\n");// 여기까지 달력의 라인을 맞추기 위함이다 

      for(j=0; j<6; j++){ // j를 6까지 반복한다 
      
         for(k=0; k<7; k++){ // k를  7까지 반복한다 
         
            if(cal[i][j][k]==32){ // 배열에 아스키코드값 32과 같으면 출력을 c로하여 공백을 출력한다 
            
               printf("%3c ", 32);
            }
            else // 아니라면 그냥 출력한다 
               printf("%3d ", cal[i][j][k]);
         }
         printf("\t"); 
         
         for(k=0; k<7; k++){ 
        
            if(cal[i+1][j][k]==32){ // 나머지 달력도 위와 같게 해준다  
               printf("%3c ", 32);
               
            }
            else
               printf("%3d ", cal[i+1][j][k]);
         }
         printf("\t"); //tab 출력
         for(k=0; k<7; k++){ 
         
            if(cal[i+2][j][k]==32){ // 나머지 달력도 위와 같게 해준다 
            
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
int leapyear(year) { // 윤년을 계산해주는 함수이다 
	if(year%4==0){ // 년에 4를 나눠 나머지값이 0이면 mon배열에첫번째에  29를 넣는다 
		mon[1]=29;
		
    	if(year%100==0){ // 년에 100을나눠 나머지값이 0이면 mon배열에 첫번쨰에  29를 넣는다 
			mon[1]=28;
			
			if(year%400==0){ //년에 400을 나눠 나머지값이 0이면 mon배열 첫반째 29를 넣는다 
				mon[1]=29;
				
			}    
		}
   } 
   else{
   	mon[1]=28;
   }
 	return mon[1];
}	

