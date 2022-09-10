#include<stdio.h>
main(){
	
	  char name[10] = "krishna";
	  char symbol  = 'm';
	  int number = 10;
	  float salary = 45000.68;
	  double trans = 45555555.8888;
	  
	  
	  printf("size of String : %d\n",sizeof(name));
	  printf("value of Name is : %s\n",name);
	  
	  
	  printf("size of char : %d\n",sizeof(symbol));
	  printf("value of symbol is : %c\n",symbol);
	  
	  printf("size of int : %d\n",sizeof(number));
	  printf("%d\n",number);
	  
	  printf("size of Float : %d\n",sizeof(salary));
      printf("%f\n",salary);
      
      printf("size of Trans : %d\n",sizeof(trans));
      printf("%lf\n",trans);
}
