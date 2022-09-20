#include<stdio.h>
int main(){
	int row,col,space;
	for(row = 0;row<5;row++){
		for(space=5;space<row;space++){
			printf("#");
		}
		for(col=0;col<=row;col--){
			printf("* ");
		}
		printf("\n");
	}
}
