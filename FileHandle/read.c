#include<stdio.h>
int main(){
	FILE *ptr;
	char data[200];
	if(ptr = fopen("sam.text","r")){
		printf("Successfully open\n");
	}
//	fscanf(ptr,"%s",data);
//	printf("%s",data);
//	fclose(ptr);

	fgets(data, 200, (FILE*)ptr);
    printf("%s\n", data );
	
}
