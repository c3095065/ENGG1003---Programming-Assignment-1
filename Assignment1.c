/*Simon West Student No. c3095065
ENGG1003 Introduction to programming---Programming-Assignment-1
English Text Ciphers mmm*/


#include <stdio.h>

float add(int a, int b);

float sum,a,b;

int main()
{
	printf("enter value for 'a'");
	scanf("%f",&a);
	printf("enter value for 'b'");
	scanf("%f",&b);
printf("a + b =%f\n", add(a,b));

return(0);
}

float  add(int a, int b)
{

return a+b;
}