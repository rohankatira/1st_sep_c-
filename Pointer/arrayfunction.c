#include<stdio.h>
main(){
	
	
	int i,num[3] = {10,20,30};
	int *pntr[3];
	for(i=0;i<3;i++){
			
		printf("Number Details \n");
		printf("value of Number : %d\n",num[i]);
		printf("Address of Number : %x\n",&num[i]);
	
	}
	for(i=0;i<3;i++){
		pntr[i] = &num[i];
		printf("Pointer Details \n");
		printf("value of Pointer : %d\n",*pntr[i]);
		printf("Address of Pointer : %x\n",pntr[i]);
	}
		
}
