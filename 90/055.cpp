#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, P, Q;
    cin >> N >> P >> Q;

    vector<long long> a(N, 0);
    for(int i=0; i<N; i++){
        cin >> a[i];
        if(a[i]%P == 0){
            a[i] == 1;
        } else{
            a[i] = a[i]%P;
        }
    }
    long long ans = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            for(int k=0; k<j; k++){
                for(int l=0; l<k; l++){
                    for(int m=0; m<l; m++){
                        if((a[i]*a[j]%P*a[k]%P*a[l]%P*a[m])%P == Q) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
