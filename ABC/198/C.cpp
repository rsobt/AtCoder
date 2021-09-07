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
    double R, X, Y;
    cin >> R >> X >> Y;
    double dist = pow(pow(X, 2) + pow(Y, 2), 0.5);
    if(dist == R){
        cout << 1 << endl;
    } else if(dist <= 2*R){
        cout << 2 << endl;
    } else {
        cout << ceil(dist/ R) << endl;
    }
}
