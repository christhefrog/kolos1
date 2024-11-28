#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

int liczby[10][2];

void wypiszObliczenia(void);

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj 10 par liczb (każdą parę zatwierdź enterem):\n");
    for(int i = 0; i<10; i++)
    {
        // Nie wiem czy o to mu chodziło
        printf("Para %d: ", i+1);
        scanf("%d %d", &liczby[i][0], &liczby[i][1]);
    }

    wypiszObliczenia();

    system("pause");

    return 0;
}

void wypiszObliczenia(void)
{
    for(int i = 0; i<10; i++)
    {
        // Nie wiem czy o to mu chodziło
        printf("Para %d: \n", i+1);
        printf("    Suma: %d\n", liczby[i][0] + liczby[i][1]);
        printf("    Różnica: %d\n", liczby[i][0] - liczby[i][1]);
        printf("    Iloczyn: %d\n", liczby[i][0] * liczby[i][1]);
        printf("    Iloraz: %d\n", liczby[i][0] / liczby[i][1]);

    }
}