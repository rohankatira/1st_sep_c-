#include<stdio.h>
main(){
		int x = 10;
		printf("%d",swap(&x));
	
}

int swap(int *x){
	int sum;
	sum = *x + 10;
	return sum;
	
}
