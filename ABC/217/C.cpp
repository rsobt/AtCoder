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
    vector<pair<int, int>> p(N);
    int a;
    rep(i, 0, N){
        cin >> a;
        p[i] = make_pair(a, i+1);
    }
    sort(all(p));
    rep(i, 0, N-1) cout << p[i].second << " ";
    cout << p[N-1].second << endl;
}
