//#include <stdio.h>
#include <string.h>

int maiorSufixo (char s1[], char s2[]){
    int i, j;
    int count = 0;
    for (i = strlen(s1) - 1, j = strlen(s2) - 1; i >= 0 && j >= 0; i--, j--){
    	if (s1[i] != s2[j]){
    		break;
    	} else {
    		count++;
    	}
    }
    return count;
}

//int main(){
//	char s1[] = "xax";
//	char s2[] = "ax";
//	printf("%d\n", maiorSufixo(s1, s2));
//	return 0;
//}