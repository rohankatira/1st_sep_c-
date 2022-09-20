#include<stdio.h>
int main(){
	int row,col,space;
	for(row=0;row<10;row++){
		for(space =10 ;space>row;space--){
			printf(" ");
		}
		for(col=0;col<row;col++){
			
			if(row==9 || row==1 ){
		     	for(row=1;row<9;row++){
				 	printf("*");
		     		
				 }
			}else{
				printf("# ");
			}
		
		printf("\n");	
		}
	
		
		
	}
}
