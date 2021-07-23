#include<bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<int> A(H*W);
    int tmp_min = 200;
    for(int i=0; i<H*W; i++){
        cin >> A[i];
        tmp_min = min(tmp_min, A[i]);
    }
    int ans = 0;
    for(int i=0; i<H*W; i++){
        ans += A[i] - tmp_min;
    }
    cout << ans << endl;
}
