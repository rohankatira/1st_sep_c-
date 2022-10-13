//String is the collection of characters
//string will be terminated by "\0"(null)

//syntax: dataType variableName[] = string 

#include<stdio.h>
#include<string.h>
void main(){
		char name[11]	 = "vivek patel";
		char name1[11];
		
		char fname[10] = "krishna";
		char lname[10] = " patel";		
	
		strcat(fname,lname)	;
		printf("%s ",fname);
//		printf("%zu",strlen(name));
//		strcpy(name1,name);
//		printf("%s\n",name1);
	
}


