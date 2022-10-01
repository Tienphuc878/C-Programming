/* Xem noi dung luu tru 1 chuoi*/ 
#include <stdio.h> 
#include <conio.h>
#include<string.h>

int main() { 
	char S1[15]="ABC";
	char S2[11]={'a','b','c','\0'};//do dai chuoi khong tinh phan tu NULL
	int i;
	printf("Du lieu luu tru cho S1:\n");
	for(i=0;i<15;i++){
		printf("%d",S1[i]);
		printf("\n");
	}
	printf("Du lieu luu tru cho S2:\n");
	for(i=0;S2[i]!='\0';i++){
		printf("%d",S2[i]);
		printf("\n");
	}		
	printf("Du lieu luu tru cho S1 - su dung length:\n");
	for(i=0;i<strlen(S1);i++){
		printf("%d",S1[i]);
		printf("\n");
	}
 	getch();
	}
