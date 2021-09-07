vector<int> pfact(int a){
    vector<int> ans;
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            ans.push_back(i);
            while(a%i==0) a /= i;
        }
    }
    if(a!=1) ans.push_back(a);
    return ans;
}