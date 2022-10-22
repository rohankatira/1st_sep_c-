#include<stdio.h>
int main(){
	
	printf("%d",fact(5));
	

}
int fact(x){
	if(x<1){
		return 1;
	}
	return x*fact(x-1);
	
}
