#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    string S;
    cin >> S;
    int ans = 1;
    for(int i=0; i<S.length(); i++){
        if(i%2==0){
            if(isupper(S[i])) ans = 0;
        } else {
            if(islower(S[i])) ans = 0;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
