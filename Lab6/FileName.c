#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int Task1();
int Task2();

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    Task1();
    Task2();

    return 0;
}

int Task1()
{
    int yeas;

    printf("Введите год: ");
    scanf("%d", &yeas);

    int remainder = yeas % 4;

    if ((remainder == 0 && yeas % 100 != 0) || yeas % 400 == 0)
    {
        printf("Год %d високосный\n", yeas);
    }
    else
    {
        printf("Год %d не високосный\n", yeas);
    }

    return 0;
}

int Task2()
{
    double x;


    printf("\nВведите x: ");
    scanf("%lf", &x);

    printf("F(%.2f) = %.6f\n", x,
        x >= 8 ? -pow(x, 2) + x - 9 : 1.0 / (pow(x, 4) - 6));

    return 0;
}