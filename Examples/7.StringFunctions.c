/* OutputString*/ 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
// user define function Dynamic array
	void print (int* a, int n){
		int i;
		for(i=0; i<n;i++)
			printf("%d ", a[i]);
	}
int main() { 
 	//C operator on string = + <>
/*
 	int a1[]={1,2,3,4,5};
 	int a2[5];
 	a1=a2;
	char s1[]="Hello";
 	char s2[]="Happy";
 	char t[30];
 	t=s1;
 	s1=s2;
 	s2=t;
*/
	
	// call print function manipulate on Dynamic Array
	int* a1=(int*)calloc(5,sizeof(int));
	int* a2=(int*)calloc(7,sizeof(int));
	int i;
	for (i=0;i<5;i++) a1[i]=i;
	for (i=0;i<7;i++) a2[i]=2*i+1;
	printf ("a1 ");print(a1,5);
	printf ("a2 ");print(a2,7);
	printf("a1=a2");
	a1=a2;
	printf("a1");	print(a1,7);//call
	puts("");
	printf("a2");print(a2,5);//call
	getch();
	return 0;
	}
