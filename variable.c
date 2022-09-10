//Variable is the storage location of the memory we can 
//change the the value during the program execution

//const - during the program const cant be changed
//dataType - : data type is the storage unit of the data
//exam - int,float,char,string,etc..


#include<stdio.h>
main(){
	
	
	const pi = 3.14;
//	int number = 10;
//	int rollnum = 85;
//	printf("Variable Example....\n");
//	printf("Value of Number is  : %d\n",number);
//	printf("Value of RollNumber  is  : %d",rollnum);

int num1 = 45,num2 =45,sum=0,sub=0,mul;
sum = num1+num2;
printf("Sum of num1 And Num 2 is :%d\n",sum);
sub = num1-num2;
printf("Sub of num1 And Num 2 is :%d\n",sub);
mul = num1*num2;
printf("Mul of num1 And Num 2 is :%d\n",mul);
}

