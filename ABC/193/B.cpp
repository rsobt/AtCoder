#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N;
    cin >> N;
    ll ans = pow(10, 10);
    ll a, p, x;
    for(int i=0; i<N; i++){
        cin >> a >> p >> x;
        if(a<x) ans = min(ans, p);
    }
    if(ans==pow(10, 10)) cout << -1 << endl;
    else cout << ans << endl;
}
