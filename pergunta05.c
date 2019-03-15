int trailingZ (unsigned int n){
    int r = 0;
    if (n == 0){
        return 32;
    }
    while(n != 0){
        if(n % 2 == 0){
            n /= 2;
            r++;
        } else {
            break;
        }
    }
    return r;
}