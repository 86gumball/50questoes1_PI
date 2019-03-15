void truncW (char t[], int n) {
	int read, write;
	int countdown = n;
	for (read = 0, write = 0; t[read] != '\0'; read++){
		if (t[read] == ' '){
			t[write] = ' ';
			write++;
			countdown = n;
		} else {
			if (countdown != 0){
				t[write] = t[read];
				write++;
				countdown--;
			}
		}
	}
	t[write] = '\0';
}