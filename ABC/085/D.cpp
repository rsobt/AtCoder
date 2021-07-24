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
    int N ,H;
    cin >> N >> H;
    vector<int> A(N), B(N);
    for(int i=0; i<N; i++) cin >> A[i] >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    reverse(B.begin(), B.end());
    int tmp = A[N-1];
    int ans = 0;
    for(int i=0; i<N; i++){
        if(B[i]<tmp) break;
        H -= B[i];
        ans ++;
        if(H<=0) break;
    }
    if(H > 0){
        ans += (H+tmp-1)/tmp;
    }
    cout << ans << endl;
}
