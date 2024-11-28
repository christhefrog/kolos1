#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

#define CP_UTF8 65001

void wypiszIleCyfr(int);

int liczba = 0;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj liczbe całkowitą: ");
    scanf("%d", &liczba);

    printf("Podana liczba: %d\n", liczba);
    
    wypiszIleCyfr(liczba);

    system("pause");

    return 0;
}

void wypiszIleCyfr(int x)
{
    char ciagLiczba[64] = "";

    itoa(x, ciagLiczba, 10);
    printf("Liczba %d ma %d cyfr(y)\n", x, strlen(ciagLiczba));
}