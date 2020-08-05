#include <stdio.h>
#include <string.h>
 
void main()
{
    char arrString1[20] = "world!!";
    char arrString2[20] = "worlc!!";
    char arrString3[20] = "worlf!!";
    char arrString4[20] = "world!!";
 
    int nReturn1 = strcmp(arrString1, arrString2);
    int nReturn2 = strcmp(arrString1, arrString3);
    int nReturn3 = strcmp(arrString1, arrString4);
 
    
    printf("strcmp(%s, %s) return : %d\n", arrString1, arrString2, nReturn1);
    printf("strcmp(%s, %s) return : %d\n", arrString1, arrString3, nReturn2);
    printf("strcmp(%s, %s) return : %d\n", arrString1, arrString4, nReturn3);
}

