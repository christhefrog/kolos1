#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

int liczba, suma, min, max;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    do
    {
        printf("Podaj liczbę: ");
        scanf("%d", &liczba);

        suma += liczba;
        if(liczba>max)
            max = liczba;
        if(liczba<min)
            min = liczba;
    }
    while(liczba != 0);
    
    printf("Suma podanych liczb: %d\n", suma);
    printf("Minimalna: %d, Maksymalna: %d\n", min, max);

    system("pause");

    return 0;
}