#include "posicao.h"

Posicao posFinal (Posicao inicial, Movimento mov[], int N){
	int i;
	for (i = 0; i < N; i++){
		if (mov[i] == Norte){
			inicial.y++;
		} else if (mov[i] == Sul){
			inicial.y--;
		} else if (mov[i] == Oeste){
			inicial.x--;
		} else {
			inicial.x++;
		}
	}
	return inicial;
}