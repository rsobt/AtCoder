#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<ll> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i] >> B[i];
    }
    ll ans = pow(10, 10);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j){
                ans = min(ans, A[i]+B[i]);
            } else{
                ans = min(ans, max(A[i], B[j]));
            }
        }
    }
    cout << ans << endl;
}
