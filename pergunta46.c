int cardinalMSet (int N, int v[N]) {
	int res = 0;
	int i;
	for (i = 0; i < N; i++){
		res += v[i];
	}
	return res;
}