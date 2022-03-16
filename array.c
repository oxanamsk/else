#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
int arr [5] = {5, 16, 32, 24, 87};
arr [0];
printf ("%d\n", arr[0]);

float numbers [3];
    numbers [0] = 6.4f;
    numbers [1] = 7.1f;
    numbers [2] = 9.8f;

    char word [] = {'S', 'o', 'm', 'e'};
    char words [] = "Hello World!";

    words [1] = 'G';
    printf("%s\n", words);
    printf("%c\n", words[0]);


    int array [3][4] = {
        {4, 5, 6,124},
        {1, 5, 7 ,12},
        {3, 6, 9, 13}
    };
        array[1][1] = 9;
        printf("%d\n", array[0][0]);
return 0;
}