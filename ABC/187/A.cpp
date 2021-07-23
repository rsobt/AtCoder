#include<bits/stdc++.h>
using namespace std;

int sum_dig(int a, int sum){
    sum += a%10;
    a /= 10;
    if(a==0){
        return sum;
    }else{
        return sum_dig(a,sum);
    }
}

int main(){
    int A, B;
    cin >> A >> B;
    cout << max(sum_dig(A, 0), sum_dig(B, 0)) << endl;
}
