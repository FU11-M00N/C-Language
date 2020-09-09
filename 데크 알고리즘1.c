#include <stdio.h>
#include <stdbool.h>

int choice;
int c1 = 1, c2 = 1, turn = 1, co = 0;


int main(void)
{

   printf("초이스 하렴.");
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
         if (turn == 1) // 프로세스 1ㅣㅇ고 
         {
            printf("\n 턴이1이다 프로세스1이 들어올것이다.");

            c1 = 0;  
            while (c2 == 0)
            {
               if (turn == 2)
               {
                  c1 = 1; // 너 꺼져라 욕아님 
               }
               
               
               
               while (turn == 2) // 턴이 2가되면  프로세스 1 한테 너 싸라고 해라. 
               { 
                  c1 = 0; // 재진입 시도 

               }

            }
            co++;
            printf("\nP1 co = %d", co);
            printf("\nProcess P2 Enters the Critical section");
            c1 = 0;
            turn = 2;
         }
         else if (turn == 2) // 프로세스 2 가 실행될때 
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


   
