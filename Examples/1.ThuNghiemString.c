/* Thu nghiem chuoi*/ 
#include <stdio.h> 
#include <conio.h>
#include <string.h>
int main() { 
	int n=10;
	char S[30]="Helloakfhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	//char S1[11]={'H','e','l','l','o','\0'};//do dai chuoi khong tinh phan tu NULL
	int m=9;
	printf("Variable n: addr: %u, value: %d\n", &n,n);
	printf("Variable S: addr: %u, value: %s\n", S,S);
//	printf("Variable S1: addr: %u, value: %s\n", S1,S1);
	printf("Variable m: addr: %u, value: %d\n", &m,m);
//	printf("The length of S: %d S1:%d\n", strlen(S),strlen(S1));
 	getch();
	}
