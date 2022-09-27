// no Return no arguemtn
#include<stdio.h>
main(){
	
	int a,b;
	printf("Enter Your Num1 : ");
	scanf("%d",&a);
	printf("Enter Your Num2 : ");
	scanf("%d",&b);
	
	int result = Add(a,b);    	//formal paramenter
	printf("Add of A and B  : %d\n",result);


	int result1 = Sub(a,b);
	printf("Sub of A and B  :  %d",result1);	
			
}
int Add(a,b){     //define Add Function   //actual parmenter
	int sum;
	sum = a + b;
	return sum;
}
int Sub(a,b){     //define Add Function 
	int sub;
	sub = a - b;
	return sub;
}
