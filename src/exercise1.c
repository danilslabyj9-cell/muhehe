#include <stdio.h>
int main(int argc, char** argv) {
float a[10];
float b=0;
for(int i = 0; i < 10; ++i) {
scanf("%f", &a[i]);
    }
for(int i = 0; i < 10; ++i) {

b+=a[i];
}
printf("%.2f",b/10);
return 0;
}
