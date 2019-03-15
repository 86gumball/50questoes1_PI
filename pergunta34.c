int elimRepOrd (int v[], int n) {
	int i, j, k, unicos;
	int u[n];
	u[0] = v[0];
	if (n == 1) return 1;
	for (i = 0, unicos = 1, j = 1; i < n - 1; i++){
		if (v[i] != v[i+1]){
			u[j] = v[i+1];
			unicos++;
			j++;
		}
	}
	for (k = 0; k < j; k++){
		v[k] = u[k];
	}
	return j;
}