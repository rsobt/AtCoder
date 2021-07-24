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
    int A, B, W;
    cin >> A >> B >> W;
    W *= 1000;
    int ans_m = pow(10, 6)+2, ans_M = -1;
    rep(i, 1, pow(10, 6)+2){
        if(A*i<=W && W<=B*i){
            ans_m = min(ans_m, i);
            ans_M = max(ans_M, i);
        }
    }
    if(ans_m!=pow(10, 6)+2&&ans_M!=-1){
        cout << ans_m << ' ' << ans_M << endl;
    } else {
        cout << "UNSATISFIABLE" << endl;
    }
}
