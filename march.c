#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
int x=5, y=4, z=67, res;
    x+=45;
    y++;
    z--;
    res=x+z+y;

printf("%d+%d+%d=%d",x,y,z, res);
return 0;
}