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
    int S, T, ans=0;
    cin >> S >> T;
    rep(a, 0, 110){
        rep(b, 0, 110){
            rep(c, 0, 110){
                if((a+b+c<=S)&&(a*b*c<=T)) ans++;
            }
        }
    }
    cout << ans << endl;
}
