/* OutputString*/ 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
// user define function input()
void getstr(char s[], int max){
	int i, c;
	i=0;
	while((c=getchar())!='\n'&&c!=EOF)
	if(i<max)
		s[i++]= (char) c;
	s[i]='\0';
} 
int main() { 
 	int n1=10;
	int n2=33;
	char S[11];
	int n3=12;
	printf("Address of n1: %u\n",&n1); 
	printf("Address of n2: %u\n",&n2);
	printf("Address of s: %u\n",S); 
	printf("Address of n3: %u\n",&n3);  
	printf("Enter a Strin: "); 
//	scanf("%s", S);
//	scanf("%10[^\n]", S); // accept blanks 
//	fgets(S, sizeof(S), stdin);
	gets(S);// tran bo nho neu nhap nhieu
// 	getstr(S, 11);// call user define Function

	printf("n1= %d\n",n1); 
	printf("n2= %d\n",n2); 
	printf("String content= %s\n",S); 
	printf("n3= %d\n",n3); 
	
	
	getch();
	return 0;
	}
