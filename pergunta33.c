int isInArray (int v[], int size, int x){
	int i;
	for (i = 0; i < size; i++){
		if (x == v[i]){
			return 1;
		}
	}
	return 0;
}

int elimRep (int v[], int n) {
	int read, write;
	int output = n;
	for (read = 0, write = 0; read < n; read++, write++){
		if (isInArray(v, write, v[read])){
			write--;
			output--;
		} else {
			v[write] = v[read];
		}
	}
	return output;
}