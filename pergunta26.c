#include <stdio.h>

//Erradp
void insere (int s[], int N, int x){
	int i, j, t;
	int copy[N];
	for (i = 0; i < N && x < s[i]; i++);
	if (i == N){
		return;
	} else {
		t = i;
		for (j = 0; t < N; j++, t++){
			copy[j] = s[t];
		}
		s[i++] = x;
		for (j = 0; i < N; i++, j++){
			s[i] = copy[j];
		}
	}
}

int main(){
	return 0;
}
// 0 1 2 3 4
// 1 2 3 6 7, 4
// i = 3


//Input: x=12, v =   1  12  13  14  15  16  17  18  19 110 111 112 113 114 115 116 117 118 119 
//Output: expected   1  12  12  13  14  15  16  17  18  19 110 111 112 113 114 115 116 117 118 119 
//        obtained  12   1  12  13  14  15  16  17  18  19 110 111 112 113 114 115 116 117 118  12 