#include <stdio.h>
int main() {
    int n, i, j, k;
    int ch=65;
    for (i = 0; i < 4-1; i++) {
        for (k = 0; k < i; k++) {
             printf(" %c ", ch);
        }
     printf("\n");
    }
    return 0;
}