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
    int H, W, N;
    cin >> H >> W >> N;
    vector<int> A(N), B(N);
    rep(i, 0, N) cin >> A[i] >> B[i];
    set<int> SA(all(A)), SB(all(B));
    vector<int> VA(all(SA)), VB(all(SB));
    rep(i, 0, N){
        cout << lower_bound(all(VA), A[i]) - VA.begin() + 1 << " " << lower_bound(all(VB), B[i]) - VB.begin() + 1 << endl;
    }
}
