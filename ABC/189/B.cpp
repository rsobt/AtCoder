#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, X;
    cin >> N >> X;
    X *= 100;
    long long ans = 0;
    long long a, b;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        ans += a*b;
        if(ans>X){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}
