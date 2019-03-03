//#include <stdio.h>

int mystrcmp (char s1[], char s2[]){
	int i;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++){
		if (s1[i] < s2[i]){
			return -1;
		} else if (s1[i] > s2[i]){
			return 1;
		}
	}
}

//int main(){
//	char s1[128];
//	char s2[128];
//	printf("Introduza a string s1(<256):\n");
//	fgets(s1, 128, stdin);
//	printf("Introduza a string s2(<256):\n");
//	fgets(s2, 128, stdin);
//	printf("%d\n", mystrcmp(s1, s2));
//	return 0;
//}