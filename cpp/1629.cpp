#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n,a,b,ans = 0,latest = 0;
    cin >> n;
    vector<pair<int,int>> movies;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        movies.push_back(pair(a,b));
    }
    sort(movies.begin(),movies.end(), [](const pair<int,int> &x, const pair<int,int> &y){
        return x.second < y.second;
    });

    for (int i = 0; i < n; i++){
        if (movies[i].first < latest){
            continue;
        }
        ans++;
        latest = movies[i].second;
    }
    cout << ans;
}