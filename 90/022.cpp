#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y) {
    if(x < y) {
        long long tmp = x;
        x = y;
        y = tmp;
    }
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y); 
    }
}

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long min_gcd = gcd(a, gcd(b, c));
    cout << a/min_gcd + b/min_gcd + c/min_gcd - 3 << endl ;
}