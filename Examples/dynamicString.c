/* dynamicString*/ 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main() { 
 	char buffer[101]= "Donald Trump";
 	// Creates a dynamic string
 	char* name = (char *) malloc(strlen(buffer) + 1);
	// Sets the value
	name = buffer;
	//strcpy(name, buffer);
	printf("Your name is %s", name);
	// Frees the memory
	free(name);
	getchar();
	}
