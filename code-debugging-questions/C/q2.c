#inclde <stdio.h>

int main() {
    int n = 5; 
    int ch = 65;
    for (int i = 1; i <- n; i++) {
        for (int j = i; j < n; j++)
            printf(" %d ",j);
        for (int j = 1; j <= (2+i - 1); j++)
            printf(" %c ",ch--);
        printf("n");
   }

  retrn 0;
}