#include <stdio.h>

int main(int argc, char** argv) {
    double a[10];  // Используем double для повышения точности
    double b = 0;

    printf("enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%lf", &a[i]);  // Формат %lf для чтения double
    }

    for (int i = 0; i < 10; ++i) {
        b += a[i];
    }

    printf("%f", b / 10);  // Вывод результата с округлением до 2 знаков
    return 0;
}
