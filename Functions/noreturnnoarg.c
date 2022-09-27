// no Return no arguemtn
#include<stdio.h>
main(){
	
		int choice;
		int check = 0;
		while(check==0){
			printf("1.Add..\n");
			printf("2.Sub..\n");
			printf("3.Exit..\n");
			printf("Enter Your Choice : ");
			scanf("%d",&choice);
			switch(choice){
				case 1 :
						Add();
				break;		
				case 2 :
						Sub();
				break;
				
				case 3 :
						exit(0);
				break;
				
				default:
					printf("Invalid Choice...");
					check=1;
				break;
		}
		}
		

		
}
int Add(){     //define Add Function 
	int sum,a,b;
	printf("Enter Your Num1 : ");
	scanf("%d",&a);
	printf("Enter Your Num2 : ");
	scanf("%d",&b);
	sum = a + b;
	printf("sum of A and B %d\n",sum);
}
int Sub(){     //define Add Function 
	int sub,a,b;
	printf("Enter Your Num1 : ");
	scanf("%d",&a);
	printf("Enter Your Num2 : ");
	scanf("%d",&b);
	sub = a - b;
	printf("sub of A and B %d\n",sub);
}
