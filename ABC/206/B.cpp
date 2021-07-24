#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N;
    map<int, ll> mp;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        mp[A[i]]++;
    }
    ll ans = 0;
    for(int i=0; i<N; i++) ans += N - mp[A[i]];
    cout << ans/2 << endl;
}
