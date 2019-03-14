int triSup (int N, float m [N][N]){
	int i, j;
	int k = N;
	for (i = 0; i < N; i++, k--){
		for (j = 0; j < N - k; j++){
			if (m[i][j] != 0){
				return 0;
			}
		}
	}
	return 1;
}