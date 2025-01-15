#include <bits/stdc++.h> 

using namespace std;


int main(){
    int n,a,b, local = 0, global = 0;
    vector<pair<int,int>> customers;
    cin >> n;
    for (int i = 0; i< n; i++){
        cin >> a >> b;
        customers.push_back(pair(a,1));
        customers.push_back(pair(b,-1));
    }
    // sort(customers.begin(),customers.end(), [](pair<int,int> const &x, pair<int,int> const &y){
    //     return x.first < y.second;
    // })
    sort(customers.begin(),customers.end());
    for (int i = 0; i < n*2; i++){
        local += customers[i].second;
        global = max(local,global);
    }
    cout << global;
}