#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

vector<int> pfact(int a){
    vector<int> ans;
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            ans.push_back(i);
            while(a%i==0) a /= i;
        }
    }
    if(a!=1) ans.push_back(a);
    return ans;
}

int main(){
    int N, M, a;
    cin >> N >> M;
    vector<bool> ans(M+1, true);
    rep(i, 0, N){
        cin >> a;
        vector<int> tmp = pfact(a);
        for(auto x:tmp){
            if(ans[x]){
                for(int j=x; j<=M; j+=x){
                    ans[j] = false;
                }
            }
        }
    }
    vector<int> res;
    rep(i, 1, M+1){
        if(ans[i]) res.push_back(i);
    }
    cout << res.size() << endl;
    rep(i, 0,  res.size()) cout << res[i] << endl;
}
