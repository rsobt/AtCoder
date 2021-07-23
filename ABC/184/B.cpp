#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    string S;
    cin >> S;
    for(int i=0; i<N; i++){
        if(S[i] == 'o'){
            X++;
        } else if(S[i]=='x'){
            if(X!=0){
                X--;
            }
        }
    }
    cout << X << endl;
}
