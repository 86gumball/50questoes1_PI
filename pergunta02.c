#include <stdio.h>
#include <stdlib.h>

int averageOfArray(int *list){
    int average = 0;
    int i;
    for (i = 0; list[i] != 0; ++i){
        average = average + list[i];
    }
    average /= i;
    return average;
}

int main() {
    int input;
    int list[999];
    int i;
    scanf ("%d", &input);
    for (i = 0; input != 0; i++){
        list[i] = input;
        scanf ("%d", &input);
    }
    printf("The average of the array is %d\n", averageOfArray(list));
    return 0;
}