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
    vector<pair<int, int>> pairs(N);
    int a, b;
    rep(i, 0, N){
        cin >> a >> b;
        pairs[i] = make_pair(a, b);
    }
    sort(all(pairs));
    int ans = 0;
    rep(i, 0, N-1){
        for(int j=i+1; j<N; j++){
            int diff = abs(pairs[j].first - pairs[i].first);
            if(pairs[i].second-diff<=pairs[j].second&&pairs[j].second<=pairs[i].second+diff) ans++;
        }    
    }
    cout << ans << endl;
}
