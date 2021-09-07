#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    int N;
    cin >> N;
    vector<vector<int>> a(3, vector<int>(N));
    rep(i, 0, 3){
        rep(j, 0, N){
            cin >> a[i][j];
        }
        sort(all(a[i]));
    }
    ll ans = 0;
    rep(i, 0, N){
        ans += (lower_bound(all(a[0]), a[1][i]) - a[0].begin()) * (N - (upper_bound(all(a[2]), a[1][i]) - a[2].begin()));
    }
    cout << ans << endl;
}
