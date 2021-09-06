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
    ll N;
    cin >> N;
    ll tmp = int(pow(N, 0.5));
    cout << "A";
    rep(i, 0, tmp){
        cout << "B";
    }
    N -= pow(2, tmp);    
    rep(i, 0, N){
        cout << "A";
    }
    cout << endl;
}
