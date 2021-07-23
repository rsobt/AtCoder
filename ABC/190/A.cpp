#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    A += C;
    if(A>B){
        cout << "Takahashi" << endl;
    } else{
        cout << "Aoki" << endl;
    }
}
