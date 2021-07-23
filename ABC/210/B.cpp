#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N;
    char c;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> c;
        if(c=='1'){
            if(i%2==0) cout << "Takahashi" << endl;
            else cout << "Aoki" << endl;
            return 0;
        }
    }
}
