#include<stdio.h>
int main(){
	//Outer Loop
	int row = 0;
	do{
		//Inner Lopp
		int col = 0;
		do{
			printf("*");
			col++;
			
		}while(col<=row)	;
		row++;
		printf("\n");
	}while(row<5)	;
	
}
