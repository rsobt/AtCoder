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
    vector<int> A(M), B(M);
    rep(i, 0, M) cin >> A[i] >> B[i];
    sort(all(A));
    sort(all(B));
    int ans = B[0] - A[M-1] + 1;
    if(ans<=0) cout << 0 << endl;
    else cout << ans << endl;
}
