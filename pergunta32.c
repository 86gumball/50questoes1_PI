int maxCresc (int v[], int N) {
	if (N == 0) {
		return 0;
	}
	int i;
	int count = 1;
	int max = 1;
	for (i = 0; i + 1 < N; i++){
		if (v[i] <= v[i+1]){
			count++;
		} else {
			count = 1;
		}
		if (count > max){
			max = count;
		}
	}
	return max;
}