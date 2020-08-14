#include <stdio.h>

int main() {
 char ch;
 FILE * fp;
 fp = fopen("test.txt","rt");
 // 파일의 경로가 컴파일 된 프로그램 위치에 존재하지 않는경우 전체 경로 입력 역슬래쉬 두번입력
 // ex) fopen("C:\\Users\\user\\Documents\\test.txt", "rt"); 
 
 if(fp == NULL) { // fopen함수가 정상적으로 작동되지 않는다면 NULL값 반환
   printf("파일 읽기 오류");
   return -1; // 에러 발생을 알리는 값 -1 리턴
 }
 
 while((ch = fgetc(fp)) != EOF) { // fgetc()함수로 fp가 가리키는 파일에 문자를 가져와서 ch에 저장. 그 값이 EOF(-1)가 아닐 때 까지 반복  
    printf("%c", ch);
 }
 fclose(fp);
}

