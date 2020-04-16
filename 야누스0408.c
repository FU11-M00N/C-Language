#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
// sizeof(������ �ڷ���) -> �ڷ����� �޸� ũ�⸦ ���
// sizeof(����) -> ������ �޸� ũ�⸦ ���

printf("������ ������ Ÿ��\n");
printf("char -----------> %dbyte\n",sizeof(char));
printf("\n\n ������ ������ Ÿ�� \n");
printf("short -----------> %dbyte\n",sizeof(short));
printf("int -----------> %dbyte \n",sizeof(int));
printf("long -----------> %dbyte \n",sizeof(long));
printf("long long -----------> %dbyte \n",sizeof(long long));
printf("\n\n �Ǽ��� ������ Ÿ��\n");
printf("float -----------> %dbyte\n",sizeof(float));
printf("double -----------> %d byte\n",sizeof(double));
printf("long double -----------> %dbyte\n\n\n",sizeof(long double));


// limits.h ----> ������ ������ ǥ�� ���� ��� ���
// float.h ---->  �Ǽ��� ������ ǥ�� ���� ��� ���
printf("**************************************************************\n\n");
// �ε��Ҽ��� ǥ������� ��Ÿ�������� %e�� ����ϰ� �ȴ�.
//unsigned int �� --> %u ��ȣ���� 10����

printf("\n\n ������ ������ ǥ�� ����\n");
printf("char     �ּҰ� ~ �ִ밪 --> %d ~~ %d\n",CHAR_MIN,CHAR_MAX);
printf("\n\n ������ ������ ǥ�� ����\n");
printf("short 	�ּҰ� ~ �ִ밪 --> %d ~~ %d\n",SHRT_MIN, SHRT_MAX);
printf("int 	�ּҰ� ~ �ִ밪 --> %d ~~ %d\n",INT_MIN,INT_MAX);
printf("unsigned int �ּҰ� ~ �ִ밪 --> 0 ~ %u\n",UINT_MAX);
printf("long  �ּҰ� ~ �ִ밪 --> %d ~~ %d\n",LONG_MIN,LONG_MAX);
printf("long long �ּҰ� ~ �ִ밪 --> %u ~~ %u\n", LLONG_MIN,LLONG_MAX);
printf("\n\n �Ǽ��� ������ ǥ�� ����\n");	
printf("float		�ּҰ� ~ �ִ밪 --> %e ~~ %e\n",FLT_MIN,FLT_MAX) ;
printf("double		�ּҰ� ~ �ִ밪 --> %e ~~ %e\n",DBL_MIN,DBL_MAX) ;
printf("long double �ּҰ� ~ �ִ밪 --> %e ~~ %e\n",LDBL_MIN,LDBL_MAX) ;

return 0;
}
