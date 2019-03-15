#include <ctype.h>

int contaPal (char s[]) {
	int i;
	int palavras = 0;
	for (i = 0; s[i] != '\0'; i++){
		if (!(isspace(s[i])) && (isspace(s[i+1]) || s[i+1] == '\0')){
			palavras++;
		}
	}
	return palavras;
}