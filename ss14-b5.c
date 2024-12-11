#include<stdio.h>
#include<string.h>
int main() {
    char string[100];
    printf("Moi nhap chuoi: ");
    fgets(string, sizeof(string), stdin);  

    int size = strlen(string);
    int count = 1;  
    for (int i = 1; i < size; i++) {
        if (string[i-1] == ' ' && string[i] != ' ') {
            count++;
        }
    }
    printf("Co %d tu trong chuoi.\n", count);
    return 0;
}
