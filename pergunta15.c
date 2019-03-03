//#include <stdio.h>

int iguaisConsecutivos (char s[]){
	if (s[0] == '\0'){
		return 0;
	}
	int max = 1;
	int buffer = 1;
	int i;
	for (i = 0; s[i] != 0; i++){
			if (s[i] == s[i+1]){
				buffer++;
			} else {
				if (buffer > max){
					max = buffer;
				}
				buffer = 1;
			}
		}	
	return max;   
}

//int main(){
//	char s[] = "abbbccd";
//	printf("%d\n", iguaisConsecutivos(s));
//	return 0;
//}