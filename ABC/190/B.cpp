#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll N, S, D, X, Y;
    cin >> N >> S >> D;
    int ans = 0;
    for(int i=0; i<N; i++){
        cin >> X >> Y ;
        if(X<S && Y>D) ans = 1;
    }
    if(ans == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}
