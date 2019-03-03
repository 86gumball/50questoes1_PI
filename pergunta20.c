#include <stdio.h>

//ERRADO
int contaPal (char s[]){
	int palavras = 0;
	int i;
	for (i = 0; s[i] == ' '; i++){
		if (s[i] == '\0'){
			return 0;
		}
	}
	for ( ; s[i] != '\0'; i++){
		if (s[i] != ' ' && s[i+1] == ' '){
			palavras++;
		}
	}
	if (s[i+1] == '\0'){
		palavras++;
	}
    return palavras;
}

int main(){
	return 0;
}