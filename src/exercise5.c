#include <stdio.h>

int main(int argc, char** argv) {
    double a[10][3], b[3][10], c[10][10] = {0};

    printf("enter m. 1:\n");
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 3; ++j) {
            scanf("%lf", &a[i][j]);
        }
    }
    printf("enter m. 2:\n");
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 10; ++j) {
            scanf("%lf", &b[i][j]);
        }
    }
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            for(int k = 0; k < 3; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("otvet:\n");
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            printf("%f ", c[i][j]);
        }
    }
    return 0;
}
