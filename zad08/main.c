#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

void wypiszSume(double,double);
void wypiszRoznice(double,double);
void wypiszIloczyn(double,double);
void wypiszIloraz(double,double);

double x = 0, y = 0;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj dwie liczby po spacji: ");
    scanf("%lf %lf", &x, &y);

    wypiszSume(x, y);
    wypiszRoznice(x, y);
    wypiszIloczyn(x, y);
    wypiszIloraz(x, y);

    system("pause");

    return 0;
}

void wypiszSume(double a, double b)
{
    printf("%lf+%lf = %lf\n", a, b, a + b);
}

void wypiszRoznice(double a, double b)
{
    printf("%lf-%lf = %lf\n", a, b, a - b);
}

void wypiszIloczyn(double a, double b)
{
    printf("%lf/%lf = %lf\n", a, b, a / b);
}

void wypiszIloraz(double a, double b)
{
    printf("%lf*%lf = %lf\n", a, b, a * b);
}