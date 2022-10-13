#include<stdio.h>
main(){
	
	
	int i,num[3] = {10,20,30};
	int *pntr;
	pntr = num;
	for(i=0;i<3;i++){
//		printf("Value of Num is %d\n",num[i]);
//		printf("Address of Num is %x\n",&num[i]);

		printf("Value of Pointer is %d\n",*pntr);
		printf("Address of Pointer is %x\n",pntr);	
		pntr++;	
		
	}
	
	
	
	
}
