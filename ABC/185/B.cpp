#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, M, T, A, B1, B2;
    long long NN = N;
    B2 = 0;
    cin >> N >> M >> T;
    int ans = 1;
    for(int i=0; i<M; i++){
        cin >> A >> B1;
        N -= A-B2;
        if(N<=0){
            ans = 0;
            break;
        } else {
            N += B1 - A;
            N = min(N, NN);
            B2 = B1;
        }
    }
    if(T-B2>=N){
        ans = 0;
    }
    if(ans == 0){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
