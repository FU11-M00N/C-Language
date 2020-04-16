#include <stdio.h>

int main(void){

int i;
int a[5] = {3,6,9,12,15};
int n = sizeof(a)/sizeof(int);
int* p= a;	
printf(" sizeof(a) = %d byte , a= %p \n\n", sizeof(a),a);
printf(" sizeof(p) = %d byte , p= %p \n\n", sizeof(p),p);

for(i=0; i<n; i++)
{
printf(" a[%d]= %2d , addr = %p \n", i, a[i], &a[i]);  //4개모두 표현이 같다.
//printf(" *(a+%d)= %2d, addr =%p \n" ,i,*(a+i), a+i);
//printf(" *(p+%d)= %2d, addr =%p \n" ,i,*(p+i), p+i);
//printf(" *(p[%d])= %2d , addr =%p \n" ,i,p[i],&p[i]);
}
return 0;
}
