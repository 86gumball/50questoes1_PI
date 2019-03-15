void insere (int s[], int N, int x){
	int i, j;
	if (x > s[N-1]) {
		s[N] = x;
		return;
	}
	for (i = 0; x > s[i]; i++);
	for (j = N; j - i != 0; j--){
		s[j] = s[j-1];
	}
	s[i] = x;
}