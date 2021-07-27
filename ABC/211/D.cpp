#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
const int MAX_V = 220000;
const long long INF = 1LL << 60;

struct edge {
    ll to;
    ll cost;
};

typedef pair<ll, ll> P;  // first: 最短距離, second: 頂点番号

ll V=MAX_V, d[MAX_V], cnt[MAX_V];
vector<edge> G[MAX_V]; // 隣接リスト表現

void dijkstra(int s) {
    fill(d, d + V, INF);
    d[s] = 0;  // 始点sへの最短距離は0
    fill(cnt, cnt + V, 0);
    cnt[s] = 1;  // 始点sへの最短経路数は1

    priority_queue<P, vector<P>, greater<P>> que;  // 距離が小さい順に取り出せるようgreater<P>を指定
    que.push(P(0, s));
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;  // 更新した頂点の中で距離が最小の頂点v
        if (d[v] < p.first) {
            continue;
        }
        for (auto e : G[v]) {  // 頂点vから出る辺eを走査
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
                cnt[e.to] = cnt[v];  // コストが更新された場合は直前の頂点への最短経路数で上書き
                cnt[e.to] %= 1000000007;
            } else if (d[e.to] == d[v] + e.cost) {
                cnt[e.to] += cnt[v];  // コストが一致する場合はこれまでの最短経路数を足し合わせ
                cnt[e.to] %= 1000000007;
            }
        }
    }
}

int main(){
    ll N, M;
    cin >> N >> M;
    V = N;
    ll a, b;
    rep(i, 0, M){
        cin >> a >> b;
        a--;
        b--;
        edge tmp = {b, 1};
        G[a].push_back(tmp);
        tmp = {a, 1};
        G[b].push_back(tmp);
    }
    dijkstra(0);
    cout << cnt[N-1]%1000000007 << endl;
}
