#include "vizinhos.h"

vizinhoBool (Posicao p1, Posicao p2){
	if (abs(p1.x - p2.x) + abs(p1.y - p2.y) == 1){
		return 1;
	} else {
		return 0;
	}
}

int vizinhos (Posicao p, Posicao pos[], int N) {
    int res = 0;
    int i;
    for (i = 0; i < N; i++){
    	if (vizinhoBool(p, pos[i])){
    		res++;
    	}
    }
    return res;
}