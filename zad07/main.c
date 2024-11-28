#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

int a, b; // a - szerokosc, b - wysokosc

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj wysokość i szerokość prostokątu: ");
    scanf("%d %d", &b, &a);

    for(int y = 0; y<b; y++)
    {
        for(int x = 0; x<a; x++)
        {
            // W wersji z wypełnieniem dajemy samo printf("*"); bez żadnych ifów

            if(x==0||y==0||y==b-1||x==a-1) // sprawdzanie czy krawedz
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    system("pause");

    return 0;
}