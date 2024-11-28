#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

#define CP_UTF8 65001

double x = 0, y = 0;

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Podaj dwie liczby po spacji: ");
    scanf("%lf %lf", &x, &y);

    printf("%lf+%lf = %lf\n", x, y, x + y); // √
    printf("%lf-%lf = %lf\n", x, y, x - y);
    printf("%lf*%lf = %lf\n", x, y, x * y);
    if(y == 0) // wyjątek
        printf("%lf/%lf = Nie można dzielić przez zero!\n", x, y);
    else
        printf("%lf/%lf = %lf\n", x, y, x / y);

    if(x < 0)
        printf("√%lf = Nie można pierwiastkować liczb ujemnych!\n", x);
    else
        printf("√%lf = %lf\n", x, sqrt(x));

    if(y < 0)
        printf("√%lf = Nie można pierwiastkować liczb ujemnych!\n", y);
    else
        printf("√%lf = %lf\n", y, sqrt(y));

    printf("%lf^2 = %lf\n", x, x*x);
    printf("%lf^2 = %lf\n", y, y*y);

    system("pause");

    return 0;
}