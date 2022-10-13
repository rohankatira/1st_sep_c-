#include<stdio.h>
main(){
	int num = 10;
	int *pntr;
	pntr = &num;
	
	
	printf("value of num : %d\n",num);
	printf("addre of num : %x\n",&num);	
	
	printf("value of pntr : %d\n",*pntr);
	printf("addre of pntr : %x\n",pntr);	
	
}
