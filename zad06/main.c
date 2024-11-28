#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

int liczba, suma, min, max;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));

    for(int i = 0; i<100; i++)
    {
        liczba = rand();

        suma += liczba;
        if(liczba>max)
            max = liczba;
        if(liczba<min)
            min = liczba;
    }
    
    printf("Suma wylosowanych liczb: %d\n", suma);
    printf("Średnia: %lf\n", suma/100.0);
    printf("Minimalna: %d, Maksymalna: %d\n", min, max);

    system("pause");

    return 0;
}