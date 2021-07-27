#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

ll gcd(ll x, ll y) {
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y); 
        //x%y==0でないときはユーグリットの互除法を使って再帰的に関数を呼び出す。
    }
}

int main(){
    int K;
    cin >> K;
    ll ans = 0;
    rep(i, 1, K+1){
        rep(j, 1, K+1){
            rep(k, 1, K+1){
                ans += gcd(i, gcd(j, k));
            }
        }
    }
    cout << ans << endl;
}
