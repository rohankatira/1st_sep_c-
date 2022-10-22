#include<stdio.h>
int main(){
	
	char *description;
//	description = malloc(20*sizeof(char));+
	printf("%d",sizeof(description));
	description = calloc(20,sizeof(char));

	if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   } else {
      strcpy( description, "Zara ali a DPS student in class 10th");
   }
   
   description = realloc(description,100*sizeof(char));
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   } else {
   		printf("realloaction...\n");
      strcpy( description, "Zara ali a DPS student in class 10th");
   }
   
   //printf("Name = %s\n", name );
   printf("Description: %s\n", description );
    free(description);
    printf("%d",sizeof(description));
}
