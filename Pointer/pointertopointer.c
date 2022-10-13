#include<stdio.h>
main(){
	
	int num = 10;
	int *pntr1,**pntr2;	
	pntr1 = &num;
	pntr2 = &pntr1;
	printf("value of Nunmber : %d\n",num);
	printf("Address of Nunmber : %x\n",&num);
	printf("value of Poiner1 : %d\n",*pntr1);
	printf("Address of Pointer1 : %x\n",pntr1);
	printf("value of Poiner2 : %d\n",**pntr2);
	printf("Address of Pointer2 : %x\n",*pntr2);

		
}
