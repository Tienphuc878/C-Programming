/*  String Builtin & User Define Functions*/ 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//user define function
char* lTrim(char s[]){
	int i=0;
	while (s[i]==' ') i++;
	if (i>0) strcpy(&s[0],&s[i]);
	return s; 
}
char* rTrim(char s[]){
	int i=strlen(s)-1;
	while (s[i]==' ') i--;
	s[i+1]='\0';
	return s; 
}

char* Trim(char s[]){
	rTrim(lTrim(s));
	char *ptr=strstr(s, " ");
	while (ptr !=NULL) {/* while two blanks exist*/
		strcpy(ptr, ptr+1); /*remove one blank*/
		ptr = strstr(s, " ");
	}
	
	return s; 
}

char* nameStr(char s[]){
	Trim(s);
	strlwr(s);
	int L = strlen(s);
	int i;
	for (i=0; i<L; i++)
		if (i==0||(i>0&&s[i-1]==' ')) s[i]=toupper(s[i]);
	
	return s; 
}

char* replaceAll(char* source, char* subStr, char* repStr){
	int subL = strlen(subStr);
	int repL = strlen(repStr);
	char temp [100];
	char* ptr = strstr(source, subStr);
	int i;
	while (ptr!=NULL){ /*While subStr exists*/
		strcpy(ptr, ptr+subL);/*Shift substr up*/
		if(repL>0){
			strcpy(temp, ptr);
			strcpy(ptr+repL, temp); /*prepare space for repStr*/
			/*copy characters in repStr to source*/
			for (i=0; i<repL; i++) *(ptr+i)=repStr[i];
		}
		ptr=strstr(source, subStr);
	}
	
	return source; 
}
int main() { 
/*	char s1[50];
	char s2[50];
	printf("Enter string s1: ");
	gets(s1);
	printf("Enter string s2: ");
	gets(s2);
	//strlen
	printf("lengths of s1: %d, s2: %d\n",strlen(s1), strlen(s2));
	
	//strcmp
	printf("Compare s1 with s2: %d\n",strcmp(s1,s2));
	
	//strupr
	printf("Uppercase s1  %s\n",strupr(s1));
	
	//strcat
	printf("Append s2 to s1  %s\n",strcat(s1,s2));
	
	char s3[10];
	printf("Enter a sub string of s1: ");
	gets(s3);
	char* ptr=strstr(s1,s3);
	printf(" Address of s1: %u\n",s1);
	printf(" Address of s3: %u\n",s3);
	printf(" Address of sunstring: %u\n",ptr);
*/
	
	char S[80] = "con coc trong hang con coc ngay ra, coc chet";
	char subStr[21]="coc";
	char repStr[21]="bo";
	puts(S);
	replaceAll(S, subStr, repStr);
	puts(S);
	
	getch();
	return 0;
	}
