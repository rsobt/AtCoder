#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;
    if(N>A){
        cout << (N-A)*Y + A*X << endl;
    } else{
        cout << N*X << endl;
    }
}