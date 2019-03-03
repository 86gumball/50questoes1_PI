#include <stdio.h>
#include <stdlib.h>

int main() {
    int input, max;
    scanf ("%d", &input);
    max = input;
    while (input != 0){
        if (input > max){
            max = input;
        }
        scanf ("%d", &input);
    }
    printf("The largest element in the array is %d\n", max);
    return 0;
}