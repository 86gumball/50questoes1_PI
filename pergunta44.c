int intersectMSet (int N, int v1[N], int v2[N], int r[N]) {
	int i;
	int res = 0;
	for (i = 0; i < N; i++){
		if (v1[i] < v2[i]){
			r[i] = v1[i];
			res += v1[i];
		} else {
			r[i] = v2[i];
			res += v2[i];
		}
	}
	return res;
}