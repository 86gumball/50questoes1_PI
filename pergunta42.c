int unionSet (int N, int v1[N], int v2[N], int r[N]) {
	int i, count = 0;
	for (i = 0; i < N; i++){
		r[i] = v1[i] + v2[i];
	}
	for (i = 0; i < N; i++){
		if (r[i] != 0){
			r[i] = 1;
			count++;
		}
	}
	return count;
}