#include <stdio.h>
#include <ctype.h>

//ERRADO
int difConsecutivos (char s[]){
	if (s[0] == '\0'){
		return 0;
	}
	int max = 1;
	int buffer = 1;
	int i;
	for (i = 0; s[i] != '\0'; i++){
		if (s[i] != s[i+1]){
			if (isalpha(s[i+1])){
				buffer++;
			}
		} else {
			if (buffer > max){
				max = buffer;
			}
			buffer = 1;
		}
	}	
	return max;   
}

int main(){
	char s[] = "abcaa";
	printf("%d\n", difConsecutivos(s));
	return 0;
}
