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