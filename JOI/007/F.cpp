#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

// https://atcoder.jp/contests/joi2008yo/tasks/joi2008yo_f

int main(){
    int N, k;
    cin >> N >> k;
    vector<pair<int,int>> D[N];
    int f, a, b, c;
    rep(i, 0, k){
        cin >> f;
        if(f==0){
            cin >> a >> b;
            a--; b--;
            // dijkstra
            vector<int> dist(N, 1000000007);
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

            Q.push(make_pair(0, a));
            dist[a] = 0;
            while(!Q.empty()){
                int pos = Q.top().second; Q.pop();
                rep(j, 0, D[pos].size()){
                    int to = D[pos][j].first, cost = D[pos][j].second;
                    if(dist[to] > dist[pos] + cost){
                        dist[to] = dist[pos] + cost;
                        Q.push(make_pair(dist[to], to));
                    }
                }
            }
            if(dist[b] == 1000000007){
                cout << -1 << endl;
            } else {
                cout << dist[b] << endl;
            }
        } else if(f==1){
            cin >> a >> b >> c;
            a--; b--;
            D[a].push_back(make_pair(b, c));
            D[b].push_back(make_pair(a, c));
        }
    }
}
