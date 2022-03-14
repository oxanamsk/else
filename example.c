#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int x=8, y=16, res;
    x--;
    y++;
    y*=165;
    res=x+y;
    printf("%d", res);
    return 0;
}
