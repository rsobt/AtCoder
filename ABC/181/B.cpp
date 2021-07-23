#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N;
    cin >> N;
    ll ans  = 0;
    for(int i=0; i<N; i++){
        ll a, b;
        cin >> b >> a;
        ans += a*(a+1)/2;
        ans -= b*(b-1)/2;
    }
    cout << ans << endl;
}
