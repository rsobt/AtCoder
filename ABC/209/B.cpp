#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    ll ans = -N/2;
    int a ;
    for(int i=0; i<N; i++){
        cin >> a;
        ans += a;
    }
    if(ans <= X) cout << "Yes" << endl;
    else cout << "No" << endl;
}
