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
    vector<pair<string, string>> p(N);
    string a, b;
    rep(i, 0, N){
        cin >> a >> b;
        p[i] = make_pair(a, b);
    }
    bool ans = false;
    rep(i, 0, N-1){
        rep(j, i+1, N){
            if(p[i] == p[j]) ans = true;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
