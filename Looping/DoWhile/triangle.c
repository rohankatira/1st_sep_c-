#include<stdio.h>
int main(){
	int row = 0;
	do{
		int col = 0;
		do{
		
			printf("%d",col);
			col++;
		}while(col<=row);
		
		row++;
		printf("\n");
	}while(row<6);
	
}
