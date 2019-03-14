void transposta (int N, float m [N][N]){
	int i, j;
	int copy[N][N];
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			copy[i][j] = m[i][j];
		}
	}
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			m[i][j] = copy[j][i];
		}
	}
}