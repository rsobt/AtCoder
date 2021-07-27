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
    int tmp = pow(2, N-1);
    vector<pair<int, int>> A(tmp);
    vector<pair<int, int>> B(tmp);
    rep(i, 0, tmp){
        int a;
        cin >> a;
        A[i] = make_pair(a, i+1);
    }
    rep(i, 0, tmp){
        int a;
        cin >> a;
        B[i] = make_pair(a, tmp+i+1);
    }
    sort(all(A));
    sort(all(B));
    if(A[tmp-1].first>B[tmp-1].first) cout << B[tmp-1].second << endl;
    else cout << A[tmp-1].second << endl;
}
