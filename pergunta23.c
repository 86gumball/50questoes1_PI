//#include <stdio.h>
#include <string.h>

int palindroma (char s[]) {
	int i, j = strlen(s) - 1;
	for (i = 0; s[i] != '\0'; i++, j--){
		if (s[i] != s[j]){
			return 0;
		}
	}
	return 1;
}

//int main(){
//	char input[4] = {'a','b','a','\0'};
//	//printf("Introduza uma frase\n");
//	//fgets(input, 128, stdin);
//	printf("%zu\n", strlen(input));
//	printf("%d\n", palindroma(input));
//	return 0;
//}