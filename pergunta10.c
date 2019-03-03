//#include <stdio.h>
#include <string.h>

char *mystrstr (char s1[], char s2[]){
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

//Input: s1="
//" -- s2=""
//Output: expected "
//"
//        obtained NULL
//9 testes correctos

//int main(){
//    char s1[] = "abc";
//    char s2[] = "b";
//    printf("%s\n", mystrstr(s1, s2));
//	return 0;
//}