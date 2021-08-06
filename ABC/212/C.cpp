#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    int N, M;
    cin >> N >> M;
    vector<ll> A(N);
    vector<ll> B(M);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, M) cin >> B[i];

    ll ans = pow(10, 10);

    rep(i, 0, N){
        rep(j, 0, M){
            chmin(ans, abs(A[i]-B[j]));
        }
    }
    cout << ans << endl;
}
