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
    ll Q, a, base = 0;
    cin >> Q;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    rep(i, 0, Q){
        cin >> a;
        if(a == 1){
            cin >> a;
            q.push(a - base);
        } else if(a == 2){
            cin >> a;
            base += a;
        } else if(a == 3){
            cout << q.top() + base << endl;
            q.pop();
        }
    }
}
