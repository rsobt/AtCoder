#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

// https://atcoder.jp/contests/abc007/tasks/abc007_3

int main(){
    int R, C, sy, sx, gy, gx;
    cin >> R >> C >> sy >> sx >> gy >> gx;
    sy--;
    sx--;
    gy--;
    gx--;
    vector<vector<int>> dist(R, vector<int>(C, -1));
    rep(i, 0, R){
        rep(j, 0, C){
            char c;
            cin >> c;
            if(c=='.') dist[i][j] = 1000000007;
        }
    }
    queue<pair<int, int>> q;
    q.push(make_pair(sy, sx));
    dist[sy][sx] = 0;
    while(!q.empty()){
        int y = q.front().first, x = q.front().second;
        q.pop();
        int dy[4] = {-1, 1, 0, 0};
        int dx[4] = {0, 0, -1, 1}; 
        rep(j, 0, 4){
            if(dist[y+dy[j]][x+dx[j]]==1000000007){
                dist[y+dy[j]][x+dx[j]] = dist[y][x] + 1;
                q.push(make_pair(y+dy[j], x+dx[j]));
            }
        }
    }
    cout << dist[gy][gx] << endl;
}
