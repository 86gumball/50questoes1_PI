int maisFreq (int v[], int N) {
	int i;
	int max = 0;
	int maxNumero = v[0];
	int count = 0;
	for (i = 0; i + 1 < N; i++){
		if (v[i] == v[i+1]){
			count++;
		} else {
			count = 0;
		}
		if (count > max){
			max = count;
			maxNumero = v[i];
		}
	}
	return maxNumero;
}