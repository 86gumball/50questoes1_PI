#include "maiscentral.h"
#include <math.h>

double dist (Posicao pos){
	double x_double = (double) pos.x;
	double y_double = (double) pos.y;
	return (sqrt(pow(x_double, 2) + pow(y_double, 2)));
}	

int maiscentral (Posicao pos[], int N) {
    int i;
    double min = dist(pos[0]);
    int indiceMin = 0;
    for (i = 0; i < N; i++){
    	if (dist(pos[i]) < min){
    		min = dist(pos[i]);
    		indiceMin = i;
    	}
    }
    return indiceMin;
}