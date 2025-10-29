#include <stdio.h>
int main(int argc, char** argv) {
    double a[10];
    printf("enter 10 numbers:\n");
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &a[i]);
    }
    for(int i = 9; i >= 0; --i) {
        printf("%.0f ", a[i]);
    }
    return 0;
}
