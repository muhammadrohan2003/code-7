#include <stdio.h>
#include <string.h>

int main() {
    char x[20];
    char y[20];
    scanf("%s %s", x, y);
    char cmp = strcmp(x, y);

    if (cmp <= 0)
        printf("%s\n", x);
    else
        printf("%s\n", y);

    return 0;
}

