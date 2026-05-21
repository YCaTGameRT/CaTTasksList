#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    printf("Привет мир!\n");
    return 0;
}