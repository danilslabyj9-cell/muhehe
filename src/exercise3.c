#include <stdio.h>
int main(int argc, char** argv) {
    double a[10];
    int k;
    printf("enter 10 numbers:\n");
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &a[i]);
    }
    printf("K: ");
    scanf("%d", &k);
    k = k % 10;
    if (k < 0) k += 10;
    for(int i = 0; i < 10; ++i) {
        printf("%f ", a[(10 - k + i) % 10]);
    }
    return 0;
}
