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
    int A, B, H, M;
    cin >> A >> B >> H >> M;
    double dH, dM;
    dH = (H%12)*30 + 0.5*M;
    dM = 6*M;
    cout << std::fixed << std::setprecision(15) << pow(A*A+B*B-2*A*B*cos(M_PI*abs(dH-dM)/180), 0.5) << endl;
}
