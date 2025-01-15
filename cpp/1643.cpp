#include <bits/stdc++.h>
using namespace std; 


int main(){
    long n, local= 0, global = 0, m = -1*pow(10,9),a ;
    bool found = false; 
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a; 
        m = max(m,a);
        local += a;
        if (local < 0){ 
            local = 0;
        } else {
            found = true;
        }
        global = max(global,local);
    }
    if (found){
        cout << global;
    } else {
        cout << m;
    }
}