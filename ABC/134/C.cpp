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
    vector<int> A(N), B(N), C(N);
    rep(i, 0, N) cin >> A[i];
    B[0]=A[0];
    C[N-1]=A[N-1];
    rep(i,1,N) B[i]=max(B[i-1],A[i]);
    for(int i=N-2; i>=0; i--) C[i] = max(C[i+1], A[i]);
    cout << C[1] << endl;
    rep(i, 1, N-1){
        cout << max(B[i-1], C[i+1]) << endl;
    }
    cout << B[N-2] << endl;
}
