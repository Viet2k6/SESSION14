#include <stdio.h>
#include <string.h>
int main() {
    char string[100] = "Hello and welcome to Vietnam";
    char ch;
    int count = 0;
    printf("Nhap vao 1 ky tu: ");
    scanf("%c", &ch);  
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    return 0;
}
