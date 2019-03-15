#include <string.h>

char *mystrstr (char s1[], char s2[]){
    if (s2[0] == '\0') {
        return s1;
    }
    int i, j, k;
    for (i = 0; s1[i] != '\0'; i++){
    	if (s1[i] == s2[0]){
            for (k = i, j = 0; s1[k] != '\0' && s2[j] != '\0'; k++, j++){
                if (s1[k] != s2[j]){
                    break;
                }
            }
            if (s2[j] == '\0'){
                return s1 + i;
            }
    	}
    }
    if (s1[0] == '\0' && s2[0] == '\0') {
        return s1;
    }
    return NULL;
}