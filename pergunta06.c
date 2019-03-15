#include <math.h>

int qDig (unsigned int n){
	int i = 0;
	if (n == 0){
		return 1;
	}
	while (n >= pow(10,i)){
		i++;
	}
	return i;
}