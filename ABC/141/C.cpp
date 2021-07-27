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
    int N, K, Q;
    cin >> N >> K >> Q;
    if(K>Q){
        rep(i, 0, N) cout << "Yes" << endl;
        return 0;
    } else {
        vector<int> A(N, 0);
        int a, tmp=Q-K;
        rep(i, 0, Q){
            cin >> a;
            a--;
            A[a]++;
        }
        rep(i, 0, N){
            if(tmp<A[i]){
                cout << "Yes" << endl;
            } else{
                cout << "No" << endl;
            }
        }
    }
}
