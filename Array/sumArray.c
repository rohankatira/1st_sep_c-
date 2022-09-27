#include<stdio.h>
int main(){
	int sum=0,size,i;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Enter The Number :\ ");
		scanf("%d",&number[i]);
		sum = sum + number[i];
	//	printf("%d",sum);
	}
	printf("sum of numbers : %d",sum);
	
			
}
