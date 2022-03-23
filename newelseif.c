#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
    int x=5;
        if (x==10) {
            printf("Yes\n");
        } else if (x > 100) {
            printf("X is greatest 100\n");
        } else if (x < 5) {
            printf("X is less than 5\n");
        } else {
            printf("No\n");
        }
        return 0;
}