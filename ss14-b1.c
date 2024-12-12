#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("Moi nhap chuoi: ");
	fgets(string,sizeof string,stdin);
	string[strcspn(string,"\n")]='\0';
	printf("Chuoi %s va do dai chuoi %d",string,strlen(string));
	
	return 0;
}
