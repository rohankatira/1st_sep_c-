#include<stdio.h>
void main(){
	
	char *description;
//	description = malloc(20*sizeof(char));
	description = calloc(200,sizeof(char));
	
	if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   } else {
      strcpy( description, "Zara ali a DPS student in class 10th");
   }
   
   //printf("Name = %s\n", name );
   printf("Description: %s\n", description );
}
