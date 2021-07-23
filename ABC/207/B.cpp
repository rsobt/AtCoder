#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    if(B>=C*D) cout << -1 << endl;
    else cout << (A+((C*D-B)-1))/(C*D-B) << endl;
}
