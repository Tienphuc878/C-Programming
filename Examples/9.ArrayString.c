/*  String Builtin & User Define Functions*/ 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//user define function
void print(char list[][31],int n){
	int i;
	for (i=0; i<n; i++) puts(list[i]);
	}
int main() {
	char names[7][31]={"Dinh Tien Hoang", "Le Dai Hanh", "Ly Cong Uan", "Le Loi","Tran Nguyen Han","Le Thanh Tong","Nguyen Hue"};
/*	int i;
	for (i=0; i<7; i++)
	printf("addr:%u, value:%s\n", &names[i], names[i]);
*/
	print(names,7);

	getch();
	return 0;
}
