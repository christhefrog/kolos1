#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

void zamienLiczby(int*, int*);

int x, y;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj dwie liczby: ");
    scanf("%d %d", &x, &y);

    printf("Podano liczby %d i %d\n", x, y);
    printf("Wywoluje zamienLiczby(%d, %d)\n", x, y);
    zamienLiczby(&x, &y);
    printf("Liczby po wywolaniu zamienLiczby: %d i %d\n", x, y);

    system("pause");

    return 0;
}

// nie wiem czy on chcial ze wskaznikami ;p
void zamienLiczby(int *a, int *b)
{
    int c = *a;
    *a=*b;
    *b=c;
}
