//사이버해킹보안과 2019202150 홍은비 20190512
//8가지 도형만들기 프로그램

#include <stdio.h>
#include <stdlib.h> // 프로그램을 종료하는 함수인 exit를 사용하기 위하여 stdlib.h를 포함시켰다. 
//사용할 함수는 main전에 선언해둔다. 
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
   printf("<1번째 도형!>\n\n"); 
   L_spacetriangle(5);
   printf("\n<2번째 도형!>\n\n");
   R_triangle(5);
   printf("\n<3번째 도형!>\n\n");
   R_spacetriangle(5);
   printf("\n<4번째 도형!>\n\n");
   Piramid(5);
   printf("\n<5번째 도형!>\n\n");
   Downpiramid(5);
   printf("\n<6번째 도형!>\n\n");
   Sandglass(5);
   printf("\n<7번째 도형!>\n\n");
   Diamond(5);
   printf("\n<8번째 도형!>\n\n");
   
   
   while(1)
   { //특정한 조건을 만족하기 전까지는 무한반복하는 while을 사용하였다. 
   
       int num1=0,num2=0,ext=0;

      printf("1이상의 정수를 입력하세요. 입력한 정수가 도형의 행과 관련이 있습니다.\n");
      scanf("%d",&num1);
   
      if(num1<1) // 만약 1이상의 정수를 입력하지않았다면 처음부터 다시 입력하기. 
      {
         printf("1 이상의 정수를 입력하지 않았습니다. 재입력하세요.\n");
         return main(); 
      } 
   
      printf("1-8까지의 도형선택지를 고르세요.\n");
   
      scanf("%d",&num2);
   
      if(num2<1 || num2>8) // 만약 1에서 8사이의 정수를 입력하지 않았다면 처음부터 다시 입력하기. 
      {
         printf("1에서 8까지의 정수를 입력하지 않았습니다. 처음부터 다시 입력하세요.\n\n");
         return main(); 
      }
   
      printf("입력하신 숫자는 %d 이고 도형선택지는 %d입니다. \n\n",num1,num2);
   
      switch(num2) // swith-case 문을 이용하여 각각의 함수들을 호출한다. 
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
      
      printf("종료하고 싶으면 1을 누르고, 계속하고 싶다면 1을 제외한 아무 숫자나 누르시오.\n");
      scanf("%d",&ext);
   
      if(ext==1) //ext가 1이면 프로그램이 종료된다. 
      {
         exit(0);
      }
   }
   
   return 0;
}

void L_triangle(int num1) // 왼쪽 직각삼각형을 만들기 위한 함수이다. 
{
   int i,j;   // i는 출력할 줄의 수이고, j는 출력할 별의 수를 나타낸다. 
   for(i=1;i<=num1;i++) // i는 입력받은 num값만큼의 줄 수를 출력하고, 
   {
      for(j=1;j<=i;j++)//j는 i의 수만큼 출력한다. 
      {
         printf("*");
      }
      
      printf("\n"); // 해당하는 i번째 줄에 j가 출력이 된다면, 다음줄로 줄바꿈 한 뒤 i에 1을 더한다. 
   }
}
void L_spacetriangle(int num1) // 왼쪽 공백 직각삼각형을 만들기 위한 함수이다. 
{
   int i,j; // i와 j는 지역변수로 위의 함수의 변수와 다른 변수이다. 
   for(i=1;i<=num1;i++)  
   {
      for(j=i;j<=num1;j++)//i값을 j에 대입하면 반복할 수록 j<=num1 조건에 만족하는 j가 num1개에서 한개씩 감소하게된다. 
      {
         printf("*");
      }
      
      printf("\n");
   }
}
void R_triangle(int num1) // 오른쪽 직각 삼각형을 만들기 위한 함수이다. 
{
   int i,j,k; //k는 출력할 공백의 개수를 나타낸다. 
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<=num1-i;k++) // i가 같을 때, k의 최댓값 + i의 최댓값은 항상 num1으로 일정해야한다. 
      {
         printf(" ");
      }
      
      for(j=1;j<=i;j++) //j의 값은 i와 같이 증가하면 된다. 
      {   
         printf("*");
      }
      
      printf("\n");
   }
}
void R_spacetriangle(int num1) // 오른쪽 공백 직각삼각형을 만들기 위한 함수이다. 
{
   int i,j,k;
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<i;k++) // i가 같을 때, k의 최댓값 + i의 최댓값은 항상 num1으로 일정해야한다.
      {
         printf(" ");
      }
      for(j=i;j<=num1;j++) // j<=num1을 만족하는 j의 개수가 하나씩 감소하여 줄당 출력되는 *의 개수는 감소한다. 
      {   
         printf("*");
      }
      
      printf("\n");
   }
}
void Piramid(int num1) // 피라미드 모형을 만들기 위한 함수이다. 
{
   int i,j,k;
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<=num1-i;k++) //공백은 num1-1개부터 0까지 출력한다. 
      {
         printf(" ");
      }
      for(j=1;j<=i;j++) //출력되는 별의 개수는 i와 같으나 별이 출력되고 곧바로 공백이 출력되어야 피라미드 모양이 나온다. 
      {   
         printf("* ");
      }
      
      printf("\n");
   }
}
void Downpiramid(int num1) // 역피라미드 모형을 만들기 위한 함수이다. 
{
   int i,j,k;
   for(i=1;i<=num1;i++)
   {   
      for(k=1;k<i;k++) //공백은 0개부터 num1-1까지 출력한다. 
      {
         printf(" ");
      }
      for(j=0;j<=num1-i;j++) // (j=i;j<num1;j++)의 다른 표현법이다. 이것 또한 j<=num1-i를 만족하는 
                            //j의 개수가 하나씩 감소하여 줄당 출력되는 *의 개수는 감소한다.  
      {   
         printf("* ");
      }
      
      printf("\n");
   }
}
void Sandglass(int num1) // 모래시계 모양을 만들기 위한 함수이다. 
{
   /*모래시계 모양을 만들 때 if문을 사용한다면 i값이 출력할 행의 개수라고 할 때, 
   i값이 num1값을 반드시 뛰어넘는다는 것을 이해하고 있어야한다. 
   그저 num1값만큼의 행을 두 번출력하는 프로그램이라면 2*num1이 i의 범위가 되겠지만, 
   별 하나가 출력되는 num1번째 행이 겹치므로 하나를 제외한
   2*num1-1만큼이 i의 범위가 된다.*/
   
   int i,j,k;
   for(i=1;i<=2*num1-1;i++)
   {   
      if(i<=num1) // if문을 사용하므로 i값이 num1값을 넘어가더라도 최대 별 개수는 num1을 넘어가지 않는다. 
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
      
      else // i값이 num1값을 넘어갔을 때, 별의 개수가 줄어들도록했다. 
      {
         for(k=1;k<num1*2-i;k++)
         {
            printf(" ");
         }
         for(j=1;j<=i-num1+1;j++) //i가 num1보다 크고 이미 별 한개가 위의 if문에서 처리 되었으므로 i-num1+1이 조건식이 된다. 
         {   
            printf("* ");
         }
      
         printf("\n");
      }
      
   }
}

void Diamond(int num1) //다이아몬드 모형을 만들기 위한 함수이다. 이것또한 i의 범위는 2*num1-1이 된다. 
                      //i의 범위만 제외하면 피라미드와 역피라미드를 합친 도형이다. 
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
         for(k=1;k<=i-num1;k++) //i가 num1보다 크므로 k의 범위는 i-num1이 되어야한다. 
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
