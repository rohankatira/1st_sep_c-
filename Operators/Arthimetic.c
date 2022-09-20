#include<stdio.h>
int main(){
	int a,b,sum,sub,mul;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	sum = a + b;
	printf("Sum of A and B  : %d\n ",sum);

	sub = a - b;
	printf("Sub of A and B  : %d\n ",sub);	
	
	mul = a * b;
	printf("Mul of A and B  : %d\n ",mul);
}
