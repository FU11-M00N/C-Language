#include <stdio.h>
#include <stdbool.h>

int choice;
int c1 = 1, c2 = 1, turn = 1, co = 0;


int main(void)
{

   printf("���̽� �Ϸ�.");
   do
   {
      printf("\n1.Process 1 Enter");
      printf("\n2.Process 2 Enter");
      printf("\n3.Both Process Enter");
      printf("\n4.Exit\n");
      scanf("%d", &choice);


      if (choice == 1)
      {
         c1 = 0;
         while (c2 == 0)
         {
            if (turn == 2)
            {
               c1 = 1;
            }
            while (turn == 2)
            {
               c1 = 0;
            }

         }
         printf("\nProcess P1 Enters the Critical section");
         c1 = 1;
         turn = 2;
      }
      else
      {
         printf("\n it is the turn process P2");
      }




   if (choice == 2)
   {
      c2 = 0;
      while (c1 == 0)
      {
         if (turn == 2)
         {
            c2 = 1;
         }
         while (turn == 2)
         {
            c2 = 0;
         }

      }
      printf("\nProcess P1 Enters the Critical section");
      c2 = 1;
      turn = 2;
   }
   else
   {
      printf("\n it is the turn process P1");
   }





   if (choice == 3)
   {
      while (true)
      {
         if (turn == 1) // ���μ��� 1�Ӥ��� 
         {
            printf("\n ����1�̴� ���μ���1�� ���ð��̴�.");

            c1 = 0;  
            while (c2 == 0)
            {
               if (turn == 2)
               {
                  c1 = 1; // �� ������ ��ƴ� 
               }
               
               
               
               while (turn == 2) // ���� 2���Ǹ�  ���μ��� 1 ���� �� �ζ�� �ض�. 
               { 
                  c1 = 0; // ������ �õ� 

               }

            }
            co++;
            printf("\nP1 co = %d", co);
            printf("\nProcess P2 Enters the Critical section");
            c1 = 0;
            turn = 2;
         }
         else if (turn == 2) // ���μ��� 2 �� ����ɶ� 
         {
            printf("\n it is the turn process P2");
            c2 = 0;
            while (c1 == 0)
            {
               if (turn == 1)
               {
                  c2 = 1;
               }
               while (turn == 1)
               {
                  c2 = 0;


               }

            }
            co++;
            printf("\nP2 co = %d", co);
            printf("\nProcess P1 Enters the Critical section");
            c2 = 1;
            turn = 1;
         }
      }
   }

         } while (true);

}


   
