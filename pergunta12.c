int evogal (char n) {
	if (n != 'A' &&
		n != 'E' &&
		n != 'I' &&
		n != 'O' &&
		n != 'U' &&
		n != 'a' &&
		n != 'e' &&
		n != 'i' &&
		n != 'o' &&
		n != 'u') {
		return 0;
	} else {
		return 1;
	}
}

void strnoV (char s[]){
	int read, write;
	for (read = 0, write = 0; s[read] != '\0'; read++){
		if (evogal(s[read]) == 0){
			s[write] = s[read];
			write++;
		}
	}
	s[write] = '\0';
}