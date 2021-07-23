#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    if(H==1 || W==1){
        cout << max(H, W) << endl;
    }else{
        cout << ((H-1)/2 + 1) * ((W-1)/2 + 1) << endl;
    }
}
