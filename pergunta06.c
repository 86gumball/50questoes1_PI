#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int qDig (unsigned int n){
	int i = 0;
	if (n == 0){
		return 1;
	}
	while (n >= pow(10,i)){
		i++;
	}
	return i;
}

int main(){
	int input;
	printf("Introduza um número: ");
	scanf("%d",&input);
	printf("%d\n", qDig(input));
	return 0;
}