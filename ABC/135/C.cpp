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
    int N;
    cin >> N;
    vector<ll> A(N+1), B(N);
    rep(i, 0, N+1) cin >> A[i];
    rep(i, 0, N) cin >> B[i];
    ll ans = 0, tmp=0;
    rep(i, 0, N){
        ans += min(tmp, A[i]);
        A[i] -= min(tmp, A[i]);
        ans += min(A[i], B[i]);
        tmp = B[i] - min(A[i], B[i]);
        // cout << tmp << endl;
        // cout << ans << endl;
    }
    ans += min(A[N], tmp);
    cout << ans << endl;
}
