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
    string contests[4] = {"ABC", "ARC", "AGC", "AHC"};
    bool used[4] = {};
    string S;
    rep(i, 0, 3){
        cin >> S;
        rep(j, 0, 4){
            if(S==contests[j]) used[j] = true;
        }
    }
    rep(i, 0, 4){
        if(used[i]==false) cout << contests[i] << endl;
    }
}
