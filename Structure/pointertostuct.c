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
	getBook(&b1);

	strcpy(b2.name,"PHP");
	b2.price = 200;
	getBook(&b2);


}

int getBook(struct Book *book){
	printf("Book Info %s\n",book->name);
	printf("Name is : %s\n",book->name);
	printf("Price is : %d\n",book->price);
}
