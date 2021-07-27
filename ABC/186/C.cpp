#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int have_7_8(int x){
    if(x==0){
        return 0;
    } else {
        if(x%8 == 7){
            return 1;
        } else {
            return have_7_8(x/8);
        }
    }
}
int have_7_10(int x){
    if(x==0){
        return 0;
    } else {
        if(x%10 == 7){
            return 1;
        } else {
            return have_7_10(x/10);
        }
    }
}

int main(){
    int N;
    cin >> N;
    int ans = 0;
    rep(i, 1, N+1){
        int tmp = have_7_8(i);
        if(tmp==0){
            tmp = have_7_10(i);
        }
        ans += tmp;
    }
    cout << N - ans << endl;
}
