//String is the collection of characters
//string will be terminated by "\0"(null)

//syntax: dataType variableName[] = string 

#include<stdio.h>
main(){
	char name[20];
	printf("Enter Your String : ");
	scanf("%s",&name);
	printf("Your Name is  : %s",name);
}


