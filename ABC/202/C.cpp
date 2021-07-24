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
    vector<vector<int>> A(3, vector<int>(N));
    rep(i, 0, 3){
        rep(j, 0, N) {
            cin >> A[i][j];
        }
    }
    ll ans = 0;
    map<int, int> mp;
    rep(i, 0, N){
        mp[A[1][A[2][i]-1]]+=1;
    }
    rep(i, 0, N){
        ans += mp[A[0][i]];
    }
    cout << ans << endl;
}
