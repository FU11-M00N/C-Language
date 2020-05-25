#include <stdio.h>
 
int main()
{
    int i, j, k;        /* i: 가로라인 계산, j: 공백의 수 계산, k: 별의 수 계산 */
    int line;            /* 입력받은 만큼 저장하는 변수 */
 
    printf("입력");        /* 입력을 콘솔창에 알려주기 위한 설명 출력 */
    scanf("%d", & line);/* 사용자에게 별의 갯수를 입력받는 코드 */
 
    for (i = 0; i < line; i++)        /* 가로라인 계산 */
    {
        for (j = 0; j < line-i; j++)  /* 공백의 수 계산 */
        {
            printf(" ");
        }
        for (k = 0; k <=i; k++)       /* 별의 수 계산 */
        {
            printf("*");    
        }
        printf("\n");                /* 가로라인이 한번 끝나면 줄바꿈 */
    }
}



