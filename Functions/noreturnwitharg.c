//no return with args
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter Your Num1 : ");
	scanf("%d",&a);
	printf("Enter Your Num2 : ");
	scanf("%d",&b);
	
	Sub(a,b);//call function with paratemeter/args
    Add(a,b);//call function with paratemeter/args	
    Mul(a,b);//call function with paratemeter/args	
}

int Sub(a,b){     //define Add Function 
	int sub;
	sub = a - b;
	printf("sub of A and B %d\n",sub);
}

int Add(a,b){     //define Add Function 
	int add;
	add = a + b;
	printf("Add of A and B %d\n",add);
}
int Mul(a,b){     //define Add Function 
	int mul;
	mul = a * b;
	printf("Mul of A and B %d\n",mul);
}
