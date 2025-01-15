#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n;
    cin >> n;

    vector <int> sticks;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        sticks.push_back(a);

    }
    sort(sticks.begin(),sticks.end());
    long res = 0;
    int mid = sticks[n/2];
    for (int i = 0; i < n; i++){
        res += abs(sticks[i]-mid);
    }
    cout << res;
}