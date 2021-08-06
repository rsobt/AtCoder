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
    int flag = 1;
    if(S[0]==S[1]&&S[1]==S[2]&&S[2]==S[3]){
        flag = 0;
    }

    int tmp = 1;
    rep(i, 0, 3){
        if(int(S[i]-'0'+1)%10!=int(S[i+1]-'0')) tmp = 0;
    }
    if(flag&&(1-tmp)) cout << "Strong" << endl;
    else cout << "Weak" << endl;
}
