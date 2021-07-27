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
    ll N;
    cin >> N;
    unordered_set<ll> um;
    for(ll i=2; i*i<11000000000; i++){
        ll tmp = i*i;
        while(1){
            if(tmp>N) break;
            um.insert(tmp);
            tmp *= i;
        }
    }
    cout << N - um.size() << endl;
}
