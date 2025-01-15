#include <bits/stdc++.h>

using namespace std; 

int main(){ 
    int n;
    cin >> n;
    cout << 0 << "\n";
    for (long long i = 2; i <= n; i++){
        long long total = ((i*i) * (i*i-1))/2;
        long long anchors = (i-2) * (i-1);
        cout << total - (anchors * 2 * 2) << "\n";
    }
}