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
    map<string, int> mp;
    string S;
    rep(i, 0, N){
        cin >> S;
        mp[S]++;
    }

    int mx = 0;
    for(auto p:mp) chmax(mx, p.second);
    for(auto p:mp) {
        if(p.second != mx) continue;
        cout << p.first << endl;
    }
}
