#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
// sizeof(데이터 자료형) -> 자로형의 메모리 크기를 출력
// sizeof(변수) -> 변수의 메모리 크기를 출력

printf("문자형 데이터 타입\n");
printf("char -----------> %dbyte\n",sizeof(char));
printf("\n\n 정수형 데이터 타입 \n");
printf("short -----------> %dbyte\n",sizeof(short));
printf("int -----------> %dbyte \n",sizeof(int));
printf("long -----------> %dbyte \n",sizeof(long));
printf("long long -----------> %dbyte \n",sizeof(long long));
printf("\n\n 실수형 데이터 타입\n");
printf("float -----------> %dbyte\n",sizeof(float));
printf("double -----------> %d byte\n",sizeof(double));
printf("long double -----------> %dbyte\n\n\n",sizeof(long double));


// limits.h ----> 정수형 데이터 표현 범위 헤더 사용
// float.h ---->  실수형 데이터 표현 범위 헤더 사용
printf("**************************************************************\n\n");
// 부동소수점 표기법으로 나타내서인지 %e를 사용하게 된다.
//unsigned int 는 --> %u 부호없는 10진수

printf("\n\n 문자형 데이터 표현 범위\n");
printf("char     최소값 ~ 최대값 --> %d ~~ %d\n",CHAR_MIN,CHAR_MAX);
printf("\n\n 정수형 데이터 표현 범위\n");
printf("short 	최소값 ~ 최대값 --> %d ~~ %d\n",SHRT_MIN, SHRT_MAX);
printf("int 	최소값 ~ 최대값 --> %d ~~ %d\n",INT_MIN,INT_MAX);
printf("unsigned int 최소값 ~ 최대값 --> 0 ~ %u\n",UINT_MAX);
printf("long  최소값 ~ 최대값 --> %d ~~ %d\n",LONG_MIN,LONG_MAX);
printf("long long 최소값 ~ 최대값 --> %u ~~ %u\n", LLONG_MIN,LLONG_MAX);
printf("\n\n 실수형 데이터 표현 범위\n");	
printf("float		최소값 ~ 최대값 --> %e ~~ %e\n",FLT_MIN,FLT_MAX) ;
printf("double		최소값 ~ 최대값 --> %e ~~ %e\n",DBL_MIN,DBL_MAX) ;
printf("long double 최소값 ~ 최대값 --> %e ~~ %e\n",LDBL_MIN,LDBL_MAX) ;

return 0;
}
