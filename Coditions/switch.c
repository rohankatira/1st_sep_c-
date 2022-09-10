#include<stdio.h>
main(){
	//switch
int choice; 
printf("what is the color of buffalow ?\n");
printf("1 . Black : \n");
printf("2 . Green : \n");
printf("3 . Red : \n");
printf("Choose Following option : ");
scanf("%d",&choice);

switch(choice){
	case 1 :
		printf("You choose Black Color...Ans is Corret");
	break;
	
	case 2 :
		printf("You choose Greeen Color...Incorret");
	break;
	
	case 3 :
		printf("You choose Red Color...Incorret");
	break;
	
	default:
		printf("Invalid Choise.....");
}
}
