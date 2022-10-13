#include<stdio.h>
int main(){
	FILE *ptr;
	ptr = fopen("sam.text","w+");
	fprintf(ptr,"Test Message \n");
	fputs("Test Message \n",ptr);
	fclose(ptr);
	
}
