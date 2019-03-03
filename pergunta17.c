//#include <stdio.h>

int maiorPrefixo (char s1[], char s2[]){
	int i;
	int count = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
		if (s1[i] != s2[i]){
			break;
		} else {
			count++;
		}
	}
    return count;
}

//int main(){
//	char s1[] = "abc";
//	char s2[] = "abc";
//	printf("%d\n", maiorPrefixo(s1, s2));
//	return 0;
//}