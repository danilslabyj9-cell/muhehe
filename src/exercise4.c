#include <stdio.h>
int main(int argc, char** argv) {
    double a[10];
    double x;
    int k;
    printf("enter 10 numbers:\n");
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &a[i]);
    }
    printf("X,K:");
    scanf("%lf %d", &x, &k);
    for(int i = 9; i > k; --i) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    for(int i = 0; i < 10; ++i) {
        printf("%.2f ", a[i]);
    }
    return 0;
}
