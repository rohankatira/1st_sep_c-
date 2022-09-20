#include<stdio.h>
int main(){
	int row,col;
	for(row=0;row<6;row++){
		for(col=0;col<6;col++){
			if(row==0 || row==5 || col==0 || col== 5){
		        printf("*");			
			}else{
				printf(" ");
			}
		}
		
		printf("\n");
	}
}
