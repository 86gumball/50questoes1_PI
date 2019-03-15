void merge (int r [], int a[], int b[], int na, int nb) {
	int i, aCounter, bCounter;
	for (i = 0, aCounter = 0, bCounter = 0; i < na + nb; i++){
		if (aCounter == na){
			r[i] = b[bCounter];
			bCounter++;
		} else if (bCounter == nb){
			r[i] = a[aCounter];
			aCounter++;
		} else {
			if (a[aCounter] > b[bCounter]){
				r[i] = b[bCounter];
				bCounter++;
			} else {
				r[i] = a[aCounter];
				aCounter++;
			}
		}
	}
}