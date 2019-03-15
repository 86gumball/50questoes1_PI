#include <string.h>

void strrev (char s[]){
	int stop = strlen(s);
	int slen = stop;
	int i;
	char copy[slen];
	strcpy(copy, s);
	slen--;
	for (i = 0; i < stop; i++, slen--){
		s[i] = copy[slen];
	}
	s[i] = '\0';
}