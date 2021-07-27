#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
const int MAX_N = 1000000;

int prime[MAX_N]; //i番目の素数
bool is_prime[MAX_N+1]; //is_prime[i]がtrueならばiは素数

void sieve(int n){
    int p=0;
    for(int i=0; i<=n; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<=n; i++){
        if(is_prime[i]){
            prime[p++] = i;
            for(int j=2*i; j<=n; j+=i) is_prime[j] = false;
        }
    }
}

int main(){
    int x;
    cin >> x;
    sieve(1000000);
    rep(i, x, 1000000){
        if(is_prime[i]){
            cout << i << endl;
            return 0;
        }
    }
}
