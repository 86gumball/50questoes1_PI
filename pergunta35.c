int comunsOrd (int a[], int na, int b[], int nb) {
	int comuns = 0;
	int aCounter = 0, bCounter = 0;
	while (aCounter < na && bCounter < nb){
		if (a[aCounter] < b[bCounter]){
			aCounter++;
		} else if (a[aCounter] > b[bCounter]){
			bCounter++;
		} else {
			aCounter++;
			bCounter++;
			comuns++;
		}
	}
	return comuns;
}