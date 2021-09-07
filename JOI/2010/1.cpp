#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

const int MAX_N = 1000000;
int par[MAX_N];
int urank[MAX_N];

void init(int n){
    for(int i=0; i<n; i++){
        par[i] = i;
        urank[i] = 0;
    }
}

int find(int x){
    if(par[x] == x){
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;

    if(urank[x] < urank[y]){
        par[x] = y;
    } else {
        par[y] = x;
        if(urank[x] == urank[y]) urank[x]++;
    }
}

bool same(int x, int y){
    return find(x) == find(y);
}

int main(){
    int N, M, K;
    cin >> N >> M >> K;
    int a, b, c;
    init(N);
    vector<tuple<int, int, int>> E;
    rep(i, 0, M){
        cin >> a >> b >> c;
        E.push_back(make_tuple(c, a, b));
    }
    sort(all(E));
    vector<int> ans;
    rep(i, 0, E.size()){
        if(!same(get<1>(E[i]), get<2>(E[i]))){
            unite(get<1>(E[i]), get<2>(E[i]));
            ans.push_back(get<0>(E[i]));
        }
    }
    sort(all(ans));
    int tmp = 0;
    rep(i, 0, N-K+1){
        tmp += ans[i];
    }
    cout << tmp << endl;
}
