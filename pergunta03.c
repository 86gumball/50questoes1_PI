#include <stdio.h>
#include <stdlib.h>

int main(){
    int input, max1, max2;
    scanf("%d", &input);
    max1 = input;
    scanf("%d", &input);
    if (input > max1){
        max2 = max1;
        max1 = input;
    } else {
        max2 = input;
    }
    scanf("%d", &input);
    while (input != 0) {
        if (input > max1){
            max2 = max1;
            max1 = input;
        } else if (input < max1 && input > max2){
            max2 = input;
        }
        scanf("%d", &input);
    }
    printf("The second largest element in the array is %d\n", max2);
    return 0;
}