#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int i;
    printf("Moi nhap chuoi: ");
    fgets(string, sizeof(string), stdin); 

    int size = strlen(string);
    int count = 0;

    for(i = 0; i < size; i++) {
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')) {
            count++;
        }
    }
    printf("Co %d ki tu la chu cai trong chuoi.\n", count);  
    return 0;
}


