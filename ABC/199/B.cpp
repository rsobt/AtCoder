#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    } 
    for(int i=0; i<N; i++){
        cin >> B[i];
    } 
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    if(A[N-1]>B[0]) cout << 0 << endl;
    else cout << B[0] - A[N-1] + 1 << endl;
    return 0;
}
