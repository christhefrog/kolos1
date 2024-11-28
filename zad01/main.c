#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

int x = 7, y = 10;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Zmienna pierwsza: %d\n", x);
    printf("Zmienna druga: %d\n", y);
    printf("Suma: %d\n", x + y);
    printf("Różnica: %d\n", x - y);
    printf("Iloczyn: %d\n", x * y);
    printf("Iloraz: %d\n", x / y);


    system("pause");

    return 0;
}