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
    string S;
    cin >> S;
    int N = S.length();
    vector<vector<int>> C(8, vector<int>(N, 0));
    if(S[0]=='c') C[0][0] = 1;
    rep(i, 1, N){
        if(S[i]=='c') C[0][i]=C[0][i-1]+1;
        else C[0][i]=C[0][i-1];
        C[0][i] %= 1000000007;
    }
    vector<char> v_c = {'c','h' ,'o', 'k', 'u', 'd', 'a', 'i'};
    rep(j, 1, 8){
        rep(i, 1, N){
            if(S[i]==v_c[j]) C[j][i]=C[j][i-1]+C[j-1][i-1];
            else C[j][i]=C[j][i-1];
            C[j][i] %= 1000000007;
        }
    }
    cout << C[7][N-1]%1000000007 << endl;
}
