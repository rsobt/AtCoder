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
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];
    int tmp = 0;
    int ans = 0;
    map<int, int> mp;
    rep(i, 0, K){
        if(mp[A[i]]==0) tmp++;
        mp[A[i]]++;
    }
    ans = tmp;
    rep(i, 0, N-K){
        mp[A[i]]--;
        if(mp[A[i]]==0) tmp--;
        if(mp[A[i+K]]==0) tmp++;
        mp[A[i+K]]++;
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}
