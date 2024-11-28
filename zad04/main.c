#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

int liczba;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    do
    {
        printf("Podaj liczbę: ");
        scanf("%d", &liczba);

        if(liczba == 0)
            continue;

        printf("Liczba %d: \n", liczba);
        if(liczba%2==0)
            printf("    jest podzielna przez 2\n");
        else
            printf("    nie jest podzielna przez 2\n");

        if(liczba%3==0)
            printf("    jest podzielna przez 3\n");
        else
            printf("    nie jest podzielna przez 3\n");
    }
    while(liczba != 0);
    
    printf("Koniec programu\n");

    system("pause");

    return 0;
}