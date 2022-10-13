#include<stdio.h>
main(){
	int x = 10,y=20;
	
	printf("Before Swappint value of x :%d\n",x);
	printf("Before Swappint value of Y :%d\n",y);
	swap(&x,&y);
	printf("After Swappint value of x :%d\n",x);
	printf("After Swappint value of Y :%d\n",y);
}

int swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y ;
	*y =temp;
	
}
