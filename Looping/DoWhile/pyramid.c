#include<stdio.h>
int main(){
	int row,space,col;
	row = 0;
	do{
		space = 10;
		do{
			space--;
			printf(" ");
		}while(space>row);
		
		col = 0;
		do{
			printf("* ");		
			col++;
		}while(col<=row);
		
		row++;
		printf("\n");
	}while(row<10);
	
	
}
