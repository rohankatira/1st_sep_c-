//String is the collection of characters
//string will be terminated by "\0"(null)

//syntax: dataType variableName[] = string 

#include<stdio.h>
#include<string.h>
void main(){
		int x;
		char str[x];
		printf("Enter Your size :");
		scanf("%d\n", &x);
	 	fgets(str, x, stdin);
		printf("x = %d, str = %s", x, str);

}
//void disp(char name[0]){
//	printf("Your Name is  : %s",name);
//}


