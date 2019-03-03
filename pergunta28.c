int crescente (int a[], int i, int j){
    int r;
    for (r = i; r != j; r++){
        if (a[r] > a[r+1]){
            return 0;
        }
    }
    return 1;
}