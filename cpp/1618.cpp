#include <bits/stdc++.h>

using namespace std; 

int count(int n, int base){
    int m = int(log(n)/log(base)), factors=0;
    int prev = 0;
    for (int i = m; i > 0; i--){
        int temp = n/pow(base,i);
        factors += (temp-prev)*i;
        prev = temp;
    }
    return factors;
}



int main(){
    int n; 
    cin >> n;
    cout << min(count(n,2),count(n,5));
}

