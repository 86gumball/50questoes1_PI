#include <stdio.h>
#include <stdlib.h>

int bitsUm (int x){
    int r=0;
    while(x != 0){
    	if(x % 2 == 0){
    		x /= 2;
    	} else {
    		x /= 2;
    		r++;
    	}
    }
    return r;
}

int main(){
    int input;
    printf("Introduza um número: ");
    scanf("%d",&input);
    printf("%d\n", bitsUm(input));
    return 0;
}