#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<vector<int>> A(2, vector<int>(N, 0));

    for(int j=0; j<2; j++){
        for(int i=0; i<N; i++){
            cin >> A[j][i];
        }
    }
    long long tmp =0;
    for(int i=0; i<N; i++){
        tmp += abs(A[0][i]-A[1][i]);
    }

    if((tmp<=K)&&(((tmp-K)%2)==0)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}
