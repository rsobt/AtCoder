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
    map<string, int> M1;
    map<string, int> M2;
    string S;
    rep(i, 0, N){
        cin >> S;
        if(S[0]=='!'){
            if(M1[S.substr(1)]==1){
                cout << S.substr(1) << endl;
                return 0;
            } else {
                M2[S.substr(1)] = 1;
            }
        } else{
            if(M2[S]==1){
                cout << S << endl;
                return 0;
            } else {
                M1[S] = 1;
            }
        } 
    }
    cout << "satisfiable" << endl;
}
