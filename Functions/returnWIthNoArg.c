// no Return no arguemtn
#include<stdio.h>
main(){
	int result = Add();
	
	printf("%d",result + 50);
	
			
}
int Add(){     //define Add Function 
	int sum,a,b;
	printf("Enter Your Num1 : ");
	scanf("%d",&a);
	printf("Enter Your Num2 : ");
	scanf("%d",&b);
	sum = a + b;
	return sum;
}
int Sub(){     //define Add Function 
	int sub,a,b;
	printf("Enter Your Num1 : ");
	scanf("%d",&a);
	printf("Enter Your Num2 : ");
	scanf("%d",&b);
	sub = a - b;
	return sub;
}
