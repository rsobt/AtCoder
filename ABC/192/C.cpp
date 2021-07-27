#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int solve(int x){
    vector<int> c(10, 0);
    int a1 = 0, a2 = 0;
    while(x!=0){
        c[x%10] += 1;
        x /= 10;
    }
    for(int i=9; i>=0; i--) {
        rep(j,0, c[i]){
            a1 = a1*10 + i;
        } 
    }
    rep(i, 1, 10){
        rep(j,0, c[i]){
            a2 = 10*a2 + i;
        }
    }
    return a1 - a2;
}

int main(){
    int N, K;
    cin >> N >> K;
    rep(i, 0, K) N = solve(N);
    cout << N << endl;
}
