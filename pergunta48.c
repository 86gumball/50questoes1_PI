#include "posicao.h"

int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int i;
    for (i = 0; inicial.x != final.x; i++){
    	if (inicial.x < final.x){
    		mov[i] = Este;
    		inicial.x++;
    	} else {
    		mov[i] = Oeste;
    		inicial.x--;
    	}
    }
    for (; inicial.y != final.y; i++){
    	if (inicial.y < final.y){
    		mov[i] = Norte;
    		inicial.y++;
    	} else {
    		mov[i] = Sul;
    		inicial.y--;
    	}
    }
    if (i > N){
    	return -1;
    } else {
    	return i;
    }
}