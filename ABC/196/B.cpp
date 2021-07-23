#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int del_0(int x){
    if(x==0) return 0;
    if(x%10==0) return del_0(x/10);
    else return x;
}

int main(){
    string S;
    cin >> S;
    for(int i=0; i<S.length(); i++){
        if(S[i]!='.') cout << S[i];
        else break;
    }
    cout << endl;
}
