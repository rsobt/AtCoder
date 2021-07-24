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
    vector<int> A(N), B(N);
    rep(i, 0, N){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(all(B));
    int l=B[N/2-1], r=B[N/2];
    rep(i, 0, N){
        if(A[i]<=l) cout << r;
        else cout << l;
        cout << endl;
    }
}
