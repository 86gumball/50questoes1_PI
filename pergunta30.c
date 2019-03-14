int menosFreq (int v[], int N){
	int count = 1;
	int i;
	int min = 0;
	for (i = 0; i + 1 < N; i++){
		if (v[i] = v[i+1]){
			min++;
		} else {
			break;
		}
	}
	for (i = 0; i + 1 < N; i++){
		if (v[i] = v[i+1]){
			count++;
		} else {
			count = 0;
		}
	}
}