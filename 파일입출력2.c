#include <stdio.h>

int main() {
 char ch;
 FILE * fp;
 fp = fopen("test.txt","rt");
 // ������ ��ΰ� ������ �� ���α׷� ��ġ�� �������� �ʴ°�� ��ü ��� �Է� �������� �ι��Է�
 // ex) fopen("C:\\Users\\user\\Documents\\test.txt", "rt"); 
 
 if(fp == NULL) { // fopen�Լ��� ���������� �۵����� �ʴ´ٸ� NULL�� ��ȯ
   printf("���� �б� ����");
   return -1; // ���� �߻��� �˸��� �� -1 ����
 }
 
 while((ch = fgetc(fp)) != EOF) { // fgetc()�Լ��� fp�� ����Ű�� ���Ͽ� ���ڸ� �����ͼ� ch�� ����. �� ���� EOF(-1)�� �ƴ� �� ���� �ݺ�  
    printf("%c", ch);
 }
 fclose(fp);
}

