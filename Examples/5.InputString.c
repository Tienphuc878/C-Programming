/* OutputString*/ 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main() { 
 	int n=10;
	char S[11]= "Hello";
	int m=9;
	printf("n=%d, S=%s, m=%d\n",n,S,m); 
	printf("Nhap mot chuoi: "); 
//	scanf("%s", S);
//	scanf("%10[^\n]", S); // accept blanks 
//	fgets(S, sizeof(S), stdin);
	gets(S);

	printf("n=%d, S=%s, m=%d\n",n,S,m); 
	getch();
	return 0;
	}
