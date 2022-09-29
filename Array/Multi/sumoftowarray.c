#include<stdio.h>
int main(){
	
	
	int i,j,row,col,sum;
	printf("Enter The row of Array : ");
	scanf("%d",&row);
	printf("Enter The col of Array : ");
	scanf("%d",&col);
	int number1[row][col];
	int number2[row][col];
	
	printf("Enter the Array 1 Elemetnes..\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&number1[i][j]);
		}
		printf("\n");
		
	}
	printf("Enter the Array 2 Elemetnes..\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&number2[i][j]);
		}
		printf("\n");
		
	}
	
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
				sum = number1[i][j] + number2[i][j];
				printf("%d\t",sum);
			}
			printf("\n");
		
		
	}


	
	
	
}
