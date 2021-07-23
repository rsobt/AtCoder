#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll N, X, A;
    cin >> N >> X;
    int tmp = 0;
    for(int i=0; i<N; i++){
        cin >> A;
        if(A!=X){
            if(tmp!=0){
                cout << ' ';
            }
            cout << A;
            tmp = 1;
        }
    }
    cout << endl;
}
