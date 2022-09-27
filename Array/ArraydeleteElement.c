#include<stdio.h>
int main(){
	int element,size,i,found,pos;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Enter The Number  [%d] : ",i);
		scanf("%d",&number[i]);
	}
	printf("Enter the value of the element to be deleted:\n");
    scanf("%d", &element);
    for(i=0;i<size;i++){
    	if(number[i]==element){
    		found = 1;
    		pos = i;
    		break;
		}
    	
	}
	if(found == 1 ){
		
		for(i=pos;i<size-1;i++){
			
			number[i] =number[i+1];
		}
		printf("Delelted element is is : ");
		
		for(i=0;i<size-1;i++){
			printf("%d",number[i]);		
			
		}
		
	}else{
		printf("Not found...");
	}
	
	
			
}
