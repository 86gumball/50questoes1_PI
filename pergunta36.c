int comuns (int a[], int na, int b[], int nb) {
	int aCounter, bCounter;
	int comuns = 0;
	for (aCounter = 0; aCounter < na; aCounter++){
		for (bCounter = 0; bCounter < nb; bCounter++){
			if (a[aCounter] == b[bCounter]){
				comuns++;
				break;
			}
		}
	}
	return comuns;
}