#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

#define CP_UTF8 65001

char imie[64], nazwisko[64];

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj swoje imie i nazwisko: ");
    scanf("%s %s", imie, nazwisko);

    printf("Witaj %s %s!\n", imie, nazwisko);
    printf("Długość twojego imienia: %d znaków\n", strlen(imie));
    printf("Długość twojego nazwiska: %d znaków\n", strlen(nazwisko));

    time_t data = time(NULL);

    time_t czas = 0;
    time(&czas);
    printf("Obecna data: %s\n", ctime(&czas));

    system("pause");

    return 0;
}