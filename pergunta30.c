int menosFreq (int v[], int N){
	int buffer;
	int min = 1;
	int minOutput = v[0];
	int i;
	for (i = 0; v[i] == v[i+1] && i < N; i++, min++);
	for (i = i + 1, buffer = 1; i < N; i++){
		if (v[i] == v[i+1]){
			buffer++;
		} else {
			if (buffer < min){
				min = buffer;
				minOutput = v[i];
			}
			buffer = 1;
		}
	}
	return minOutput;
}