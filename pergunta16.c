#include <string.h>

int difConsecutivos (char s[]){
	int i, j;
	int max = 0;
	int buffer = 0;
	int ascii[127] = {0};
	for (i = 0; s[i] != '\0'; i++){
		for (j = i; s[j] != '\0'; j++){
			if (ascii[s[j]] == 0){
				ascii[s[j]]++;
				buffer++;
			} else {
				memset(ascii, 0, sizeof(ascii));
				buffer = 0;
			}
			if (buffer > max) {
				max = buffer;
			}
			if (buffer == 0) break;
		}
		buffer = 0;
	}
	return max;   
}