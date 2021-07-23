#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    for(int i=0; i<S.length(); i++){
        char c = S[S.length() - i - 1] ;
        if(c=='6'){
            cout << 9 ;
        } else if(c == '9'){
            cout << 6;
        } else {
            cout << c;
        }
    }
    cout << endl;
}
