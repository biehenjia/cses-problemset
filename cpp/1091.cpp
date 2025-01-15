#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    multiset<long> m;
    int x,y;
    
    cin >> x;
    cin >> y;
    vector<long> customers;
    
    for (int i = 0; i < x; i++){
        long ticket;
        cin >> ticket;
        m.insert(ticket);
    }

    for (int i = 0; i < y; i++){
        long customer;
        cin >> customer;
        auto temp = m.upper_bound(customer);
        if (temp == m.begin()){
            cout << -1 << "\n";
        } else {
            cout << *(--temp) << "\n";
            m.erase(temp);
        }

    }


}