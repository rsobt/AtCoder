#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll N, K;
    cin >> N >> K;
    for(int i=0; i<K; i++){
        if(N%200==0) N /= 200;
        else N = N*1000 + 200;
    }
    cout << N << endl;
}
