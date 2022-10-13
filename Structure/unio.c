#include<stdio.h>
#include <string.h>
//struct Book{
//	char name[9];
//	int price;
//};

union Book{
	char name[8];
	int price;
	int salary;
};

main(){
	union Book b1;
	printf("%d",sizeof(b1));
}
