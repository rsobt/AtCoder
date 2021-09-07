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
    int N, M;
    cin >> N >> M;
    vector<vector<int>> dp(N, vector<int>(N, 1000000007));
    int a, b, t;
    rep(i, 0, M){
        cin >> a >> b >> t;
        a--; b--;
        dp[a][b] = t;
        dp[b][a] = t;
    }
    rep(i, 0, N) dp[i][i] = 0;
    rep(k, 0, N){
        rep(i, 0, N){
            rep(j, 0, N){
                chmin(dp[i][j], dp[i][k]+dp[k][j]);
            }
        }
    }
    
    vector<int> ans;
    rep(i, 0, N){
        ans.push_back(*max_element(all(dp[i])));
    }
    cout << *min_element(all(ans)) << endl;
}
