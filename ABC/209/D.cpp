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
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> G(N);
    rep(i, 0, N-1){
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    queue<int> que;
    vector<int> dis(N, -1);

    que.push(0);
    dis[0] = 0;

    while(!que.empty()){
        int t = que.front();
        que.pop();

        for(int x : G[t]){
            if(dis[x]==-1){
                dis[x] = dis[t] + 1;
                que.push(x);
            }
        }
    }

    rep(i, 0, Q){
        int a, b;
        cin >> a >> b;

        if(dis[a-1]%2 == dis[b-1]%2) cout << "Town" << endl;
        else cout << "Road" << endl;
    }
}
