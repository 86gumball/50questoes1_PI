//#include <stdio.h>
#include <string.h>

char *mystrcat (char s1[], char s2[]){
	int s1len = strlen(s1);
	int i = 0;
	for (s1len; s2[i] != '\0'; s1len++, i++){
		s1[s1len] = s2[i];
	}
	s1[s1len] = '\0';
	return s1;
}

//int main(){
//	char s1[128];
//	char s2[128];
//	printf("Introduza a string s1(<256):\n");
//	fgets(s1, 128, stdin);
//	printf("Introduza a string s2(<256):\n");
//	fgets(s2, 128, stdin);
//	printf("A string concatenada é: %s\n", mystrcat(s1,s2));
//	return 0;
//}