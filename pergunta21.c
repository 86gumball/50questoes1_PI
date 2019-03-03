//#include <stdio.h>

int isVowel (char v){
	switch (v){
		case 'a':
			return 1;
			break;
		case 'e':
			return 1;
			break;
		case 'i':
			return 1;
			break;
		case 'o':
			return 1;
			break;
		case 'u':
			return 1;
			break;
		case 'A':
			return 1;
			break;
		case 'E':
			return 1;
			break;
		case 'I':
			return 1;
			break;
		case 'O':
			return 1;
			break;
		case 'U':
			return 1;
			break;
		default:
			return 0;
			break;
	}
}

int contaVogais (char s[]) {
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++){
    	if (isVowel(s[i])){
    		count++;
    	}
    }
    return count;
}

//int main(){
//	char input[128];
//	printf("Introduza uma frase\n");
//	fgets(input, 128, stdin);
//	printf("%d\n", contaVogais(input));
//	return 0;
//}