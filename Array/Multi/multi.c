#include<stdio.h>
int main(){
	//int number[2][3] = {{10,20,30},{70,80,90}};
	//int number[][3] = {{10,20,30},{70,80,90}};
	//int number[2][3] = {10,20,30,70,80,90};
	//printf("%d\n",number[1][1]);
	//printf("%d",number[0][0]);
	
	int i,j,row,col;
	printf("Enter The row of Array : ");
	scanf("%d",&row);
	printf("Enter The col of Array : ");
	scanf("%d",&col);
	int number[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&number[i][j]);
		}
		printf("\n");
		
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("[%d][%d] = %d\t",i,j,number[i][j]);
		
		}
		printf("\n");
		
	}
	
	
}
