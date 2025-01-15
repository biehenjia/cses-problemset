#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q; 
    vector<long> prefix= {0};
    for (int i = 0; i < n; i++){
        long a;
        cin >> a;
        prefix.push_back(prefix.back() + a);
    }
    for (int i = 0; i < q; i++){
        long l,r;
        cin >> l >> r; 
        cout << prefix[r] - prefix[l-1]<< "\n";
    }

}