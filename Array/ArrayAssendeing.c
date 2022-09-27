#include<stdio.h>
int main(){
	int sum=0,size,i,j,temp;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Enter The Number :\ ");
		scanf("%d",&number[i]);
	}
	for(i=0;i<size;++i){
		for(j=i+1;j<size;++j){
			//printf("%d%d\n",number[i],number[j]);
			if(number[i]>number[j]){
				temp = number[i];
				number[i]=number[j];
				number[j]=temp;
			
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d\n",number[i]);
	}
			
}
