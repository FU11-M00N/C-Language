// 문호준 ,작성일2019년 5월 15일 
//가위바위보를 활용해 이긴횟수만큼의 번호에 맞는 별을 출력 


#include <stdio.h>// printf scanf 등을 쓰기위한 함수 
#include <stdlib.h>//srand()를사용하기위해 선언
#include <time.h> // 시간과 관련된 함수를 사용하기위해 선언
void star1(int); // 1번그림의 별을 나타내는 반복문 
void star2(int); // 2번그림의 별을 나타내는 반복문 
void star3(int); // 3번그림의 별을 나타내는 반복문 
void star4(int); // 4번그림의 별을 나타내는 반복문 
void star5(int); // 5번그림의 별을 나타내는 반복문 
void star6(int); // 6번그림의 별을 나타내는 반복문 
void star7(int); // 7번그림의 별을 나타내는 반복문 
void star8(int); // 8번그림의 별을 나타내는 반복문 


int main(){
	printf("1번별\n");
	 star1(5); // 1번그림의 별을 나타내는 반복문 
	 
	 printf("2번별\n");
	 star2(5); // 2번그림의 별을 나타내는 반복문 
	 
	 printf("3번별\n");
	 star3(5); // 3번그림의 별을 나타내는 반복문 
	 
	 printf("4번별\n");
	 star4(5); // 4번그림의 별을 나타내는 반복문 
	 
	 printf("5번별\n");
	 star5(5); // 5번그림의 별을 나타내는 반복문 
	 
	 printf("6번별\n");
	 star6(5); // 6번그림의 별을 나타내는 반복문 
	 
	 printf("7번별\n");
	 star7(5); // 7번그림의 별을 나타내는 반복문 
	 
	 printf("8번별\n");
	star8(5); // 8번그림의 별을 나타내는 반복문
	


	int i,j,n;
	int k=0;
	int star_number;
	printf("별의 행 수를 입력하시오.\n");
	scanf("%d",&n);// 별의 행 수를 입력 
	
	printf("가위바위보의 이긴 수만큼 별의변호가 출력됩니다.\n");
	star_number=RSP();	 // 가위바위보 게임을 진행하고 ,가위바위보 이긴 횟수를 저장 
	
	if(star_number==1){ // 이긴횟수가 한번이라면 1번그림 출력 
		star1(n);
		
	}
	else if(star_number==2){ // 이긴횟수가 두번 이라면 2번그림 출력 
		star2(n);
	}
	else if( star_number==3){ // 이긴횟수가 세번 이라면 3번그림 출력 
		 star3(n);
	}
	else if(star_number==4){ // 이긴횟수가 네번 이라면 4번그림 출력 
		star4(n);
	}
	else if(star_number==5){ // 이긴횟수가 다섯번 이라면 5번그림 출력 
		star5(n);
	}
	else if( star_number==6){ // 이긴횟수가 여섯번 이라면 6번그림 출력 
		star6(n);
	}
	else if( star_number==7){ // 이긴횟수가 일곱번 이라면 7번그림 출력 
		star7(n);
	}
	else if( star_number==8){ // 이긴횟수가 여덟번 이라면 8번그림 출력 
		star8(n);
	}
	else{ // 이긴횟수가 0번이라면 printf 를 출력하고 다시 횟수와 게임을 진행 
		printf("한번도 못이겼습니다. 다시입력하세요\n"); 
	}
	return 0;
}


int RSP(){ // 가위바위보 게임함수 
	int computer,user,i; 
	int wincount =0,star_number; 
	 srand(time(NULL)); //랜덤값을 사용 

	printf("\n 가위:1번\n 바위:2번\n 보:  3번\n\n\n\n\n 입력해주세요 :\n ");
	for(i=1; i<=8; i++){
		scanf("%d", &user);
		printf("\n"); 
		
		computer = rand() % 3 + 1; //컴퓨터의 랜덤 수를 1~3으로 지정  
		if (computer == 1) { //  컴퓨터가 1이고 유저가 1이면 비김 2이면 승리 3이면 패배 
			if (user == 1) {
				printf(" 당신은 (가위) 선택 컴퓨터는 (가위)선택 :[비겼습니다]\n");
			} else if (user == 2) {
				printf(" 당신은 (바위) 선택 컴퓨터는 (가위)선택 : [이겼습니다]\n");
				wincount++;
			} else if (user == 3) {
				printf(" 당신은 (보)선택 컴퓨터는 (가위)선택 : [졌습니다]\n");
			} 
			else{ // 1,2,3가 아닌 다른 수가 나오면 별게임을 재시작 
				printf("1,2,3 중입력 하시오 게임을 재시작합니다.\n");
				RSP();
				}
			}	
			
		 else if (computer == 2) { // 컴퓨터가 2이고 유저가 1이면 패배 2이면 비김 3이면 승리 
			if (user == 1) {
				printf(" 당신은 (가위) 선택 컴퓨터는 (바위)선택 :  [졌습니다]\n");
			} else if (user == 2) {
				printf(" 당신은 (바위) 선택 컴퓨터는 (바위)선택 :  [비겼습니다]\n");
			} else if (user == 
			3) {
				printf(" 당신은 (보) 선택 컴퓨터는 (바위)선택 :   [이겼습니다]\n");
				wincount++;
			}
			else{// 1,2,3가 아닌 다른 수가 나오면 별의 게임을 재시작 
				printf("1,2,3 중입력 하시오. 게임을 재시작합니다.\n");
				RSP();
				}
			}
		 else if (computer == 3) { // 컴퓨터가 3이고 유저가 1이면 승리 2이면 패배 3이면 비김 
			if (user == 1) {
				printf(" 당신은 (가위) 선택 컴퓨터는 (보) 선택 :[이겼습니다]\n");
				wincount++;
			} else if (user == 2) {
				printf(" 당신은 (바)위 선택 컴퓨터는 (보) 선택 :[졌습니다]\n");
			} else if (user == 3) {
				printf(" 당신은 (보) 선택 컴퓨터는 (보) 선택 :	[비겼습니다]\n");
			}
			else { // 1,2,3가 아닌 다른 수가 나오면  게임을 재시작 
				printf("1,2,3 중입력 하시오 게임을 재시작합니다.\n");
				RSP();
				}
			}
			printf("\n %d번째게임입니다\n",i);
		} 
		printf("이긴횟수는 %d번입니다.\n",wincount);
			printf("%d번별이 보여집니다.\n",wincount);
		return wincount;
		 // 승리한 횟수를 함수 RSP 에게 리턴 
}
void star1(int n){ // 1번그림의 반복문 
	int i,j;
	for(i=1; i<=n; i++){ // i가 1부터  i는 입력받은 값 n까지 증가한다 
		for(j=1; j<=i; j++){ // j가 1부터 j는 i값까지 증가하며 별을 찎는다 
			printf("*"); 
		}
	printf("\n");	 // i문을 한번씩 돌때마다 들여쓰기 
	}
	
}
void star2(int n){  // 2번그림의 반복문 
	int i,j;

	for(i=1; i<=n; i++){  //i가 1부터  i는 입력받은 값 n까지 증가한다 
		for(j=n; j>=i; j--){ //j가 n부터 j는 i값 까지 감소하며 별을찍는다 
			printf("*");
		}
		printf("\n"); 
	}
}
void star3(int n){ // 3번그림의 반복문
	int i,j,k; //  
	for(i=0; i<=n; i++){ // i가 0부터  i는 입력받은 값 n까지 증가한다 
    	for(k=0; k<n-i; k++){ // k는 0부터 입력받은 값 n -i 까지 증가하며 공백을 찍는다 
    		printf(" ");
		}
			for(j=1; j<=i; j++){ // j가 1부터 i까지 증가하며 별을 찍는다 
			printf("*");
			}
		printf("\n");
	}
}
void star4(int n){ // 4번그림의 반복문
	int i,j;
		for(i=1; i<=n; i++){  // i가 1부터  i는 입력받은 값 n까지 증가한다 
		for(j=0; j<i; j++){ //j가 0부터 i까지 증가하며 공백을 찍는다 
			printf(" "); 
		}
		for(j=0; j<=n-i; j++){ // j가 0부터 입력받은 값 n-i 값까지 증가하며 별을찍는다 
			printf("*");
		}
		printf("\n");
		}
}
void star5(int n){ // 5번그림의 반복문
	int i,j;
	for(i=0; i<=n-1; i++){ // i가 0부터 입력받은 값 n-1 까지 증가한다 
		for(j=1; j<=n-i-1; j++){ // j가 1부터 n-i-1 까지 증가하며 공백을 찍는다 
			printf(" ");
		}
		for(j=0; j<=i; j++){// j가 0부터 i까지 증가하며 별을찍는다 
			printf("* ");
		}
		printf("\n");
	}
}
void star6(int n){ // 6번그림의 반복문
	int i,j;
	for(i=1; i<=n; i++){ // i가 1부터 n까지 증가한다 
		for(j=1; j<i; j++){ // j가 1부터 i까지 증가하며 공백을 찍는다 
			printf(" ");
		}
		for(j=0; j<=n-i; j++){ // j가 0부터 j가 n-i 까지 증가하며 별을 찍는다 
			printf("* ");
		}
		printf("\n");
	}
}
void star7(int n){ // 7번그림의 반복문
	int i,j;
	for(i=1; i<=n; i++){ // i가 1부터 n까지 증가한다 
		for(j=1; j<i; j++){ // j가 1부터 i까지 증가하며 공백을 찍는다 
			printf(" ");
		}
		for(j=0; j<=n-i; j++){ // j가 0부터 n-i 까지 증가하며 별을 찍는다 
			printf("* ");
		}
		printf("\n");
	}
	for(i=1; i<=n-1; i++){ // i가 n-i 까지 증가한다 
		for(j=1; j<=n-i-1; j++){ // j가 1부터 입력받은 값 n-i-1까지 증가하며 공백을 찍는다 
			printf(" ");
		}
		for(j=0; j<=i; j++){ // j가 0부터 i랑까지 증가하며 별을찍는다 
			printf("* "); 
		}
		printf("\n");
	}
	printf("\n");
}
void star8(int n){ // 8번그림의 반복문
	int i,j;

	for(i=0; i<=n-1; i++){ // i가 0부터  n-1까지 증가한다 
		for(j=1; j<=n-i-1; j++){ // j가 1부터 n-i-1까지 증가하며 공백을찍는다 
			printf(" ");
		}
		for(j=0; j<=i; j++){ //j가 0부터 i까지 증가하며 별을찍는다 
			printf("* ");
		}
		printf("\n");
	}
	for(i=1; i<=n; i++){  // i가 1부터  i는 입력받은 값 n까지 증가한다 
		for(j=0; j<i; j++){ //j가 0부터 i까지 증가하며 공백을찍는다 
			printf(" ");
		}
		for(j=1; j<=n-i; j++){ //j가 n-1까지 증가하며 별을찍는다 
			printf("* ");
		}
		printf("\n");
	} 	
}
