#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> poles= {{},{},{}};
vector <pair<int,int>> history; 

int moves = 0; 

void solve(int height, int source, int target){
    if (height == 1){
        poles[target].push_back(poles[source].back());
        poles[source].pop_back();
        history.emplace_back(source+1,target+1);
        moves++;
    }
    else { 
        solve(height-1, source, 3-source-target );
        poles[target].push_back(poles[source].back());
        poles[source].pop_back();
        history.emplace_back(source+1,target+1);
        moves ++;
        solve(height-1,3-source-target,target);
    }
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        poles[0].push_back(i);
    }
    solve(n,0,2);
    cout << moves << "\n";
    for (int i = 0; i < moves; i++){
        cout << history[i].first <<" "<< history[i].second << "\n";
    }
}

