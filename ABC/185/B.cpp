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
    ll N, M, T;
    cin >> N >> M >> T;
    ll tmp = N;
    vector<int> A(M+1, 0), B(M+1, 0);
    rep(i, 0, M) cin >> A[i+1] >> B[i+1];
    int ans = 1;
    rep(i, 1, M+1){
        tmp -= A[i] - B[i-1];
        if(tmp<=0){
            ans = 0;
            break;
        }
        tmp += B[i] - A[i];
        tmp = min(tmp, N);
        // cout << tmp << endl;
    }
    if(tmp<=T-B[M]) ans=0;
    if(ans==1) cout << "Yes" << endl;
    else cout << "No" << endl;
}
