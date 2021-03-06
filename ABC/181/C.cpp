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
    vector<int> X(N), Y(N);
    rep(i, 0, N) cin >> X[i] >> Y[i];
    int ans = 0;
    rep(i, 0, N){
        rep(j, i+1, N){
            rep(k, j+1, N){
                if((Y[j]-Y[i])*(X[k]-X[i])==(Y[k]-Y[i])*(X[j]-X[i])) ans = 1;
                if(ans) break;
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
