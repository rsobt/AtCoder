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
    int K, N;
    cin >> K >> N;
    vector<int> A(N+1, 0);
    rep(i, 0, N) cin >> A[i];
    A[N] = A[0]+K;
    int ans = A[1] - A[0];
    rep(i, 0, N) {
        ans = max(ans, A[i+2]-A[i+1]);
    }
    cout << K - ans << endl;
}
