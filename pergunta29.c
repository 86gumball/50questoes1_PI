//#include <stdio.h>

int retiraNeg (int v[], int N){
    int copy[N];
    int i, r;
    for (i = 0; i < N; i++){
        copy[i] = v[i];
    }
    for (i = 0, r = 0; i < N; i++){
        if (copy[i] >= 0){
            v[r] = copy[i];
            r++;
        }
    }
    return r;
}

//int main(){
//    return 0;
//}