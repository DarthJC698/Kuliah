#include <stdio.h>

long long counter = 0;

void fraktal_B(int x) {
 int i;
 if (x <= 0) return;
 else {
 fraktal_B(x - 1);
 for (i = 1; i <= x; i++) counter++;
 fraktal_B(x - 2);
 }
}

int main(){
    fraktal_B(31);
    printf("%lld", counter);
}
