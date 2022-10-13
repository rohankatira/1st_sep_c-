#include<stdio.h>
#include <string.h>
struct Book{
	char name[10];
	int price;
};

main(){
	
	struct Book b1;
	struct Book b2;
	strcpy(b1.name,"HTML");
	b1.price = 100;
	printf("Book 1 Info\n");
	printf("Name is : %s\n",b1.name);
	printf("Price is : %d\n",b1.price);
	
	
	strcpy(b2.name,"PHP");
	b2.price = 200;
	printf("Book 2 Info\n");
	printf("Name is : %s\n",b2.name);
	printf("Price is : %d\n",b2.price);
	
}
