//���̹���ŷ���Ȱ� 2019202150 ȫ���� 20190512
//8���� ��������� ���α׷�

#include <stdio.h>
#include <stdlib.h> // ���α׷��� �����ϴ� �Լ��� exit�� ����ϱ� ���Ͽ� stdlib.h�� ���Խ��״�. 
//����� �Լ��� main���� �����صд�. 
void L_triangle(int);
void L_spacetriangle(int);
void R_triangle(int);
void R_spacetriangle(int);
void Piramid(int);
void Downpiramid(int);
void Sandglass(int);
void Diamond(int);



int main()
{
   L_triangle(5);
   printf("<1��° ����!>\n\n"); 
   L_spacetriangle(5);
   printf("\n<2��° ����!>\n\n");
   R_triangle(5);
   printf("\n<3��° ����!>\n\n");
   R_spacetriangle(5);
   printf("\n<4��° ����!>\n\n");
   Piramid(5);
   printf("\n<5��° ����!>\n\n");
   Downpiramid(5);
   printf("\n<6��° ����!>\n\n");
   Sandglass(5);
   printf("\n<7��° ����!>\n\n");
   Diamond(5);
   printf("\n<8��° ����!>\n\n");
   
   
   while(1)
   { //Ư���� ������ �����ϱ� �������� ���ѹݺ��ϴ� while�� ����Ͽ���. 
   
       int num1=0,num2=0,ext=0;

      printf("1�̻��� ������ �Է��ϼ���. �Է��� ������ ������ ��� ������ �ֽ��ϴ�.\n");
      scanf("%d",&num1);
   
      if(num1<1) // ���� 1�̻��� ������ �Է������ʾҴٸ� ó������ �ٽ� �Է��ϱ�. 
      {
         printf("1 �̻��� ������ �Է����� �ʾҽ��ϴ�. ���Է��ϼ���.\n");
         return main(); 
      } 
   
      printf("1-8������ ������������ ������.\n");
   
      scanf("%d",&num2);
   
      if(num2<1 || num2>8) // ���� 1���� 8������ ������ �Է����� �ʾҴٸ� ó������ �ٽ� �Է��ϱ�. 
      {
         printf("1���� 8������ ������ �Է����� �ʾҽ��ϴ�. ó������ �ٽ� �Է��ϼ���.\n\n");
         return main(); 
      }
   
      printf("�Է��Ͻ� ���ڴ� %d �̰� ������������ %d�Դϴ�. \n\n",num1,num2);
   
      switch(num2) // swith-case ���� �̿��Ͽ� ������ �Լ����� ȣ���Ѵ�. 
      {
         case 1 :
             L_triangle(num1);
             break;
      
         case 2 :
             L_spacetriangle(num1);
             break;
      
         case 3 :
             R_triangle(num1);
             break;
          
         case 4 :
             R_spacetriangle(num1);
             break;
          
         case 5 :
             Piramid(num1);
             break;
          
         case 6 :
             Downpiramid(num1);
             break;
          
         case 7 :
             Sandglass(num1);
             break; 
          
         case 8 :
             Diamond(num1);
      }
      
      printf("�����ϰ� ������ 1�� ������, ����ϰ� �ʹٸ� 1�� ������ �ƹ� ���ڳ� �����ÿ�.\n");
      scanf("%d",&ext);
   
      if(ext==1) //ext�� 1�̸� ���α׷��� ����ȴ�. 
      {
         exit(0);
      }
   }
   
   return 0;
}

void L_triangle(int num1) // ���� �����ﰢ���� ����� ���� �Լ��̴�. 
{
   int i,j;   // i�� ����� ���� ���̰�, j�� ����� ���� ���� ��Ÿ����. 
   for(i=1;i<=num1;i++) // i�� �Է¹��� num����ŭ�� �� ���� ����ϰ�, 
   {
      for(j=1;j<=i;j++)//j�� i�� ����ŭ ����Ѵ�. 
      {
         printf("*");
      }
      
      printf("\n"); // �ش��ϴ� i��° �ٿ� j�� ����� �ȴٸ�, �����ٷ� �ٹٲ� �� �� i�� 1�� ���Ѵ�. 
   }
}
void L_spacetriangle(int num1) // ���� ���� �����ﰢ���� ����� ���� �Լ��̴�. 
{
   int i,j; // i�� j�� ���������� ���� �Լ��� ������ �ٸ� �����̴�. 
   for(i=1;i<=num1;i++)  
   {
      for(j=i;j<=num1;j++)//i���� j�� �����ϸ� �ݺ��� ���� j<=num1 ���ǿ� �����ϴ� j�� num1������ �Ѱ��� �����ϰԵȴ�. 
      {
         printf("*");
      }
      
      printf("\n");
   }
}
void R_triangle(int num1) // ������ ���� �ﰢ���� ����� ���� �Լ��̴�. 
{
   int i,j,k; //k�� ����� ������ ������ ��Ÿ����. 
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<=num1-i;k++) // i�� ���� ��, k�� �ִ� + i�� �ִ��� �׻� num1���� �����ؾ��Ѵ�. 
      {
         printf(" ");
      }
      
      for(j=1;j<=i;j++) //j�� ���� i�� ���� �����ϸ� �ȴ�. 
      {   
         printf("*");
      }
      
      printf("\n");
   }
}
void R_spacetriangle(int num1) // ������ ���� �����ﰢ���� ����� ���� �Լ��̴�. 
{
   int i,j,k;
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<i;k++) // i�� ���� ��, k�� �ִ� + i�� �ִ��� �׻� num1���� �����ؾ��Ѵ�.
      {
         printf(" ");
      }
      for(j=i;j<=num1;j++) // j<=num1�� �����ϴ� j�� ������ �ϳ��� �����Ͽ� �ٴ� ��µǴ� *�� ������ �����Ѵ�. 
      {   
         printf("*");
      }
      
      printf("\n");
   }
}
void Piramid(int num1) // �Ƕ�̵� ������ ����� ���� �Լ��̴�. 
{
   int i,j,k;
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<=num1-i;k++) //������ num1-1������ 0���� ����Ѵ�. 
      {
         printf(" ");
      }
      for(j=1;j<=i;j++) //��µǴ� ���� ������ i�� ������ ���� ��µǰ� ��ٷ� ������ ��µǾ�� �Ƕ�̵� ����� ���´�. 
      {   
         printf("* ");
      }
      
      printf("\n");
   }
}
void Downpiramid(int num1) // ���Ƕ�̵� ������ ����� ���� �Լ��̴�. 
{
   int i,j,k;
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<i;k++) //������ 0������ num1-1���� ����Ѵ�. 
      {
         printf(" ");
      }
      for(j=0;j<=num1-i;j++) // (j=i;j<num1;j++)�� �ٸ� ǥ�����̴�. �̰� ���� j<=num1-i�� �����ϴ� 
                            //j�� ������ �ϳ��� �����Ͽ� �ٴ� ��µǴ� *�� ������ �����Ѵ�.  
      {   
         printf("* ");
      }
      
      printf("\n");
   }
}
void Sandglass(int num1) // �𷡽ð� ����� ����� ���� �Լ��̴�. 
{
   /*�𷡽ð� ����� ���� �� if���� ����Ѵٸ� i���� ����� ���� ������� �� ��, 
   i���� num1���� �ݵ�� �پ�Ѵ´ٴ� ���� �����ϰ� �־���Ѵ�. 
   ���� num1����ŭ�� ���� �� ������ϴ� ���α׷��̶�� 2*num1�� i�� ������ �ǰ�����, 
   �� �ϳ��� ��µǴ� num1��° ���� ��ġ�Ƿ� �ϳ��� ������
   2*num1-1��ŭ�� i�� ������ �ȴ�.*/
   
   int i,j,k;
   for(i=1;i<=2*num1-1;i++)
   {   
      if(i<=num1) // if���� ����ϹǷ� i���� num1���� �Ѿ���� �ִ� �� ������ num1�� �Ѿ�� �ʴ´�. 
      {
            for(k=1;k<i;k++)
            {
               printf(" ");
            }
            for(j=0;j<=num1-i;j++)
            {   
               printf("* ");
            }
      
            printf("\n");
         
      }
      
      else // i���� num1���� �Ѿ�� ��, ���� ������ �پ�鵵���ߴ�. 
      {
         for(k=1;k<num1*2-i;k++)
         {
            printf(" ");
         }
         for(j=1;j<=i-num1+1;j++) //i�� num1���� ũ�� �̹� �� �Ѱ��� ���� if������ ó�� �Ǿ����Ƿ� i-num1+1�� ���ǽ��� �ȴ�. 
         {   
            printf("* ");
         }
      
         printf("\n");
      }
      
   }
}

void Diamond(int num1) //���̾Ƹ�� ������ ����� ���� �Լ��̴�. �̰Ͷ��� i�� ������ 2*num1-1�� �ȴ�. 
                      //i�� ������ �����ϸ� �Ƕ�̵�� ���Ƕ�̵带 ��ģ �����̴�. 
{
   int i,j,k;
   
   for(i=1;i<=2*num1-1;i++)
   {
      if (i<=num1)
      {
         
         for(k=1;k<=num1-i;k++)
         {
            printf(" ");
         }
         for(j=1;j<=i;j++)
         {   
            printf("* ");
         }
      
         printf("\n");
      }
      
      else
      {
         for(k=1;k<=i-num1;k++) //i�� num1���� ũ�Ƿ� k�� ������ i-num1�� �Ǿ���Ѵ�. 
         {
            printf(" ");
         }
         for(j=0;j<=num1*2-i-1;j++)
         {   
            printf("* ");
         }
      
         printf("\n");
      }
   }
   
   
} 
