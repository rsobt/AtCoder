#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll N, K;
    cin >> N >> K;
    vector<int> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B.begin(), B.end());
    long long tmp = K/N;
    K %= N;
    if(K==0){
        for(int i=0; i<N; i++) cout << tmp << endl;
        return 0;
    }
    int id = B[K-1];
    for(int i=0; i<N; i++){
        if(A[i]<=id) cout << tmp+1 << endl;
        else cout << tmp << endl;
    }
}
