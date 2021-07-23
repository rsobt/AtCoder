#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int del_0(int x){
    if(x==0) return 0;
    if(x%10==0) return del_0(x/10);
    else return x;
}

int main(){
    int N;
    cin >> N;
    N = del_0(N);
    string S = to_string(N);
    int ans = 1;
    for(int i=0; i<S.length()/2; i++){
        if(S[i]!=S[S.length()-1-i]) ans = 0;
    }
    if(ans) cout << "Yes";
    else cout << "No";
    cout << endl;
}
