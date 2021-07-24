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
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];
    sort(all(A));
    rep(i, 0, N){
        if(A[i]<i+1){
            cout << 0 << endl;
            return 0;
        }
    }
    ll ans = 1;
    rep(i, 0, N){
        ans *= A[i]-i;
        ans %= ll(pow(10, 9)+7);
    }
    cout << ans << endl;
}
