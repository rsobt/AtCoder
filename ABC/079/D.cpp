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
    int H, W;
    cin >> H >> W;
    vector<vector<int>> dp(10, vector<int>(10, 1000000007));
    int a;
    rep(i, 0, 10){
        rep(j, 0, 10){
            cin >> a;
            dp[i][j] = a;
        }
    }
    rep(k, 0, 10){
        rep(i, 0, 10){
            rep(j, 0, 10){
                chmin(dp[i][j], dp[i][k]+dp[k][j]);
            }
        }
    }
    int ans = 0;
    rep(i, 0, H*W){
        cin >> a;
        if(a!=-1){
            ans += dp[a][1];
        }
    }
    cout << ans << endl;
}
