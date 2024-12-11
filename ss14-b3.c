#include <stdio.h>
#include <string.h>
int main(){
    char string[100] = "Hello Vietnam";
    char temp;
    int i;
    int size = strlen(string);
    int j = size - 1;

    for (i = 0; i < size / 2; i++) {
        temp = string[j];      
        string[j] = string[i]; 
        string[i] = temp;      
        j--;
    }
    for (i = 0; i < size; i++) {
        printf("%c ", string[i]);
    }
    printf("\n");
    return 0;
}
