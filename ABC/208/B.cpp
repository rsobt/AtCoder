#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    vector<int> A(10, 1);
    for(int i=1; i<10; i++){
        A[i] = (i+1)*A[i-1];
    }
    int P;
    cin >> P;
    int ans=0;
    for(int i=0; i<10; i++){
        if(A[9-i]*100<=P){
            P -= A[9-i]*100;
            ans += 100;
        } else {
            int tmp = P/A[9-i];
            P -= tmp*A[9-i];
            ans += tmp;
            if(P==0) break;
        }
    }
    cout << ans << endl;
}
