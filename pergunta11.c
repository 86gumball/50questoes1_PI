//#include <stdio.h>
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

//int main(){
//	char s1[256];
//	printf("Introduza a string s1(<256):\n");
//	fgets(s1, 256, stdin);
//	mystrrev(s1);
//	printf("%s\n", s1);
//	return 0;
//}