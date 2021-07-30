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
    int N;
    cin >> N;
    vector<int> H(N);
    rep(i, 0, N) cin >> H[i];
    int tmp = H[N-1];
    int ans = 1;
    for(int i=N-1; i>0; i--){
        if(H[i]<=tmp){
            tmp = H[i];
        } else if(H[i]-1==tmp){
            tmp = H[i] - 1;
        }else {
            ans = 0;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl; 
}
