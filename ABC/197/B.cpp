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
    int H, W, X, Y;
     cin >> H >> W >> X >> Y;
     vector<vector<int>> A(H+2, vector<int>(W+2, 1));
     char c; 
     rep(i, 0, H){
         rep(j, 0, W){
             cin >> c;
             if(c=='#') A[i+1][j+1] = 1;
             else A[i+1][j+1] = 0;
         }
     }
     int ans = 1;
     for(int i=X+1; i<=H; i++){
         if(A[i][Y]==0) ans++;
         else break;
     }
     for(int i=X-1; i>0; i--){
         if(A[i][Y]==0) ans++;
         else break;
     }
     for(int i=Y+1; i<=W; i++){
         if(A[X][i]==0) ans++;
         else break;
     }
     for(int i=Y-1; i>0; i--){
         if(A[X][i]==0) ans++;
         else break;
     }
     cout << ans << endl;
}
