#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = '5';

    if (isdigit(ch)) {
        printf("%c is a numeric digit.\n", ch);
    } else {
        printf("%c is not a numeric digit.\n", ch);
    }

    return 0;
}
