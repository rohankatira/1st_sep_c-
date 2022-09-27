#include<stdio.h>
int main(){
//	int number[5] = {10,20,30,40,50};
//	printf("%d\n",number[3]);
//	printf("%d\n",number[0]);

int size,i;
printf("Enter The Size of Array :  ");
scanf("%d",&size);
int number[size];
for(i=0;i<size;i++){
	printf("Enter The Elements %d: ",i);
	scanf("%d",&number[i]);	
	
}
for(i=0;i<size;i++){
	printf("Elements  is %d  :  %d  \n ",i,number[i]);
	
	
}

	
}
