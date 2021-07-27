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
    int N, t;
    cin >> N;
    vector<pair<double, double>> A(N);
    rep(i, 0, N){
        int a, b;
        cin >> t ;
        cin >> a >> b;
        A[i] = make_pair(a, b);
        if(t==1){
            A[i].first;
            A[i].second;
        } else if(t==2){
            A[i].first;
            A[i].second -= 0.5;
        } else if(t==3){
            A[i].first += 0.5;
            A[i].second;
        } else if(t==4){
            A[i].first += 0.5;
            A[i].second -= 0.5;
        }
    }
    sort(all(A));
    int ans = 0;
    rep(i, 0, N){
        rep(j, i+1, N){
            if(A[j].first<=A[i].second) ans++;
        }
    }
    cout << ans << endl;
}
