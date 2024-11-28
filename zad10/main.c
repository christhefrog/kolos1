#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

int czyPitagorejskie(int,int,int);

int a = 0, b = 0, c = 0;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj trzy liczby: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("czyPitagorejskie(%d, %d, %d) == %d\n", a, b, c, czyPitagorejskie(a, b, c));

    system("pause");

    return 0;
}

int czyPitagorejskie(int a, int b, int c)
{
    if(a*a+b*b==c*c)
        return 1;
    return 0;
}
