#include<stdio.h>
int main(){
	FILE *ptr;
	char name[50];
	char output;
	printf("Enter your Name : ");
	scanf("%s",&name);
	ptr = fopen("student.text","a+");
	fprintf(ptr,name);
	fprintf(ptr,"\n");
	fclose(ptr);
	
	ptr = fopen("student.text","r");
	
	do{
		output = fgetc(ptr);
		printf("%c",output);
			
	}while(output != EOF);
		
	fclose(ptr);
	
}
