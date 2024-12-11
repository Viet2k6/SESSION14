#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    printf("Moi nhap chuoi: ");
    fgets(string, sizeof(string), stdin);
    size_t size = strlen(string);
    printf("Chuoi vua nhap: %s", string);
    printf("Do dai chuoi: %zu\n", size);

    return 0;
}
