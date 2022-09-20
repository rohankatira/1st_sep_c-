#include<stdio.h>
int main(){
	int row = 0; //intialize
	while(row<5){
		row++;
		int col = 0;
		while(col<row){
			col++;
			printf("*");
		}
		
		printf("\n");
	}


}
