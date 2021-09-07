#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> D(N, vector<int>(N, 0));
    int a, b;
    rep(i, 0, M){
        cin >> a >> b;
        a--; b--;
        D[a][b] = 1;
        D[b][a] = 1;
    }
    int B[N];
    rep(i, 0, N) B[i] = i;
    int ans = 0;
    do{
        bool flag = true;
        rep(i, 0, N-1){
            if(D[B[i]][B[i+1]]==0){
                flag = false;
                continue;
            }
        }
        if(flag) ans++;
    } while (next_permutation(B+1, B+N));
    cout << ans << endl;
}
