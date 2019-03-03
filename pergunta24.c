#include <stdio.h>
#include <string.h>

int remRep (char texto []){
    int i, k;
    for (i = 0; texto[i] != '\0'; i++){
    	if (texto[i] == texto[i+1]){
    		for (k = i; texto[k] != '\0'; k++){
    			texto[k] = texto [k+1];
    		}
    		texto[k] = '\0';
    		i--;
    	}
    }
    return strlen(texto);
}

int main(){
	return 0;
}