#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main(){
    string s;
    cin >> s; 
    int local = 1, global = 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i-1]){
            local++;
            

        } else { 
            global = max(global, local);
            local = 1;
        }
    }
    cout << max(global,local);
}