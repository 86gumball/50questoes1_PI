//#include <stdio.h>

char *mystrcpy (char *dest, char source[]){
    int i;
	for (i = 0; source[i] != '\0'; i++){
		dest[i] = source[i];
	}
	dest[i] = source[i];
	return dest;
}

//int main(){
//	char dest[256];
//	char source[256];
//	printf("Introduza a string source(<256):\n");
//	fgets(source, 256, stdin);
//	printf("A string copiada foi %s", mystrcpy(dest, source));
//	return 0;
//}