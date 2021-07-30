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
    int N, M;
    cin >> N >> M;
    vector<int> A(N, 0);
    int p;
    string S;
    rep(i, 0, M){
        cin >> p >> S;
        p--;
        if(A[p]>0) continue;
        if(S=="WA"){
            A[p]--;
        } else {
            A[p] = A[p]*(-1) + 1;
        }
    }
    int ans1 = 0, ans2 = 0;
    rep(i, 0, N){
        if(A[i]>0){
            ans1++;
            ans2 += A[i] - 1;
        }
    }
    cout << ans1 << " " << ans2 << endl;
}
